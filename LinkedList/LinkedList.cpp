#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList(){
        front = NULL;
        std::cout << "I was in construtor " << std::endl;
}

LinkedList::~LinkedList(){
        std::cout << "I was in destructor" << std::endl;
}

void LinkedList::remove(int index){
        if(index >= 0 && index < this->size() ) {
                Listnode* trash;
                if (index == 0 ) {
                        trash = front;
                        front = front->next;
                }
                else{
                        Listnode* current = front;
                        for (int i = 0; i < index -1; i++) {
                                current = current->next;
                        }
                        trash = current->next;
                        current->next =  current->next->next; //removing the mapping of the pointer
                }
                delete trash; //garbage collection avoiding memory leak
        }
        else{
                std::cout << "Array index out of bound exception, index -> " << index << std::endl;
        }
}

void LinkedList::set(int index, int value){
        Listnode* current = front;
        // iterating where we have to set the given value
        for (int i = 0; i < index; i++) {
                current = current->next;
        }
        //store the data here now so it will insert
        current->data = value;
}

int LinkedList::get(int index){
        Listnode* current = front;
        for (int i = 0; i < index; i++) {
                current = current->next;
        }
        //store the data here now so it will insert
        return current->data;

}

void LinkedList::insert(int index, int value){
        if (index == 0) {
                Listnode* oldFront = front;
                front = new Listnode(value);
                front->next = oldFront;
        }else{
                Listnode* current = front;
                for (int i = 0; i < index-1; i++) {
                        if (index > this->size()) {
                                std::cout << "index out of bound" << '\n';
                        }
                        current = current->next;
                }
                //store the data here now so it will insert
                Listnode* temp = new Listnode(value);
                temp->next = current->next; // XXX
                current->next =  temp;
        }
}

void LinkedList::clear(){


}

int LinkedList::size(){
        int count = 0;
        Listnode* current = front;
        while (current->next != NULL) {
                count++;
                current = current->next;
        }
        return count + 1;
}

void LinkedList::add(int value){
        // std::cout << "in add" << value <<'\n';
        if (front == NULL) {
                // std::cout << "1" << std::endl;
                front = new Listnode(value);
        }
        else{
                // std::cout << "2 omnwares >>" << std::endl;
                Listnode* current = front;
                while (current->next != NULL) {
                        current = current->next;
                }
                current->next =  new Listnode(value);
        }
        // std::cout << "FInished " << std::endl;
        // std::cout << "size of my linked list is as follows so please look here for more information ->>> " << this -> size() << std::endl;

}

std::ostream& operator<<(std::ostream& out, LinkedList& list){
        out << "{";
        out <<  list.get(0);
        for (int i = 1; i < list.size(); i++) {
                out << "," << list.get(i);
        }
        out << "}";
        return out;
}

void LinkedList::print(){
        if (front == NULL) {
                std::cout << "The list is empty" << '\n';
        }else{
                Listnode* current = front;
                while (current->next == NULL) {
                        std::cout << current->data;
                }
        }
}
// int main() {
//   LinkedList x;
//   x.add();
//   return 0;
// }
