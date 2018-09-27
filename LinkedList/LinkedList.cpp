#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList(){
  front = NULL;
  std::cout << "I was in contructor" << std::endl;
}

LinkedList::~LinkedList(){
  std::cout << "I was in destructor" << std::endl;
}

void LinkedList::remove(int index){
  if (index == 0 ) {
    front = front -> next;
  }
  else{
    Listnode* current = front;
    for (int i = 0;  i < index -1; i++) {
      current = current -> next;
    }
    //store the data here now so it will insert
    current -> next =  current -> next -> next;
  }

}

void LinkedList::set(int index, int value){
  Listnode* current = front;
  for (int i = 0;  i < index; i++) {
    current = current -> next;
  }
  //store the data here now so it will insert
  current -> data = value;
}

int LinkedList::get(int index){
  Listnode* current = front;
  for (int i = 0;  i < index; i++) {
    current = current -> next;
  }
  //store the data here now so it will insert
  return current -> data;

}

void LinkedList::insert(int index, int value){
  if (index == 0) {
    Listnode* oldFront = front;
    front = new Listnode(value);
    front -> next = oldFront;
  }else{
    Listnode* current = front;
    for (int i = 0;  i < index-1; i++) {
      if (index > this -> size()) {
        std::cout << "index out of bound" << '\n';
      }
      current = current -> next;
    }
    //store the data here now so it will insert
    Listnode* temp = new Listnode(value);
    temp -> next = current -> next; // XXX
    current -> next =  temp;
  }
}

void LinkedList::clear(){


}

int LinkedList::size(){
  int count = 0;
  Listnode* current = front;
  while (current->next != NULL) {
    count ++;
    current = current->next;
  }
  return count + 1;
}

void LinkedList::add(int value){
  std::cout << "in add" << '\n';
  if (front == NULL) {
    front = new Listnode(value);
  }
  else{
    Listnode* current = front;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next =  new Listnode(value);
  }
}

std::ostream& operator<<(std::ostream& out, LinkedList& list){
  out << "{";
  out <<  list.get(0);
    for (int i = 1;  i < list.size() ; i++) {
      out << "," << list.get(i);
    }
  out << "}";
  return out;
}

void LinkedList::print(){
  if (front == NULL) {
  }else{
    std::cout << "The list is empty" << '\n';
    Listnode* current = front;
    while (current->next == NULL) {
      std::cout << current->data ;
    }
  }
}
// int main() {
//   LinkedList x;
//   x.add();
//   return 0;
// }
