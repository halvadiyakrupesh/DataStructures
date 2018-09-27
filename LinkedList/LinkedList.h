#ifndef _listnode_h
#define _listnode_h

#include <iostream>
#include <string>

struct Listnode {
  int data;   //this will store the data which we will provide
  Listnode* next; //this will point to next node
    Listnode(int d =0, Listnode* n = NULL){
      data = d;
      next = n;
    }
};

class LinkedList{

    private:
            Listnode* front;

    public:
            LinkedList();
            ~LinkedList();
            void add(int value);
            bool isEmpty();
            void remove();
            void set();
            void get();
            void size();
            void insert();
            void clear();
            void print();

};

#endif
