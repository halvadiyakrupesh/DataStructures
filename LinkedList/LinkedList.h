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
            void remove(int index);
            void set(int index, int value);
            int get(int index);
            int size();
            void insert(int index, int value);
            void clear();
            void print();
            friend std::ostream& operator<<(std::ostream& out, LinkedList& list);

};

#endif
