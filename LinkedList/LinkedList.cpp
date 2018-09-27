#include <iostream>
#include "LinkedList.h"

    LinkedList::LinkedList(){
      front = NULL;
    std::cout << "I was in contructor bitch" << std::endl;
    }
    LinkedList::~LinkedList(){
    std::cout << "I was in destructor bitch" << std::endl;
    }

    void remove(){

    }

    void set(){

    }

    void insert(){

    }

    void clear(){


    }

    void LinkedList::add(int value){
      if (front == NULL) {
        front = new Listnode(value);
      }
      else{
        Listnode* current = front;
        while (current->next != NULL) {
          current = current->next;
        }
        current->next =  new Listnode(value);
        std::cout << "hello" << std::endl;

      }
  }


    void LinkedList::print(){
      if (front == NULL) {
        std::cout << "The list is empty" << '\n';
      }else{
        Listnode* current = front;
        while (current->next == NULL) {
          std::cout << current->data << '\n';
        }
      }
    }
// int main() {
//   LinkedList x;
//   x.add();
//   return 0;
// }
