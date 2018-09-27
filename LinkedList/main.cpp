#include <iostream>
#include "LinkedList.cpp"
#include "LinkedList.h"

void testAdd(LinkedList& list){
  list.add(5);
  list.add(7);
  list.add(5);
  list.add(7);
  list.add(8);
  list.add(5);
  list.insert(4, 1654);
  list.add(7);
  list.add(8);
}

int main() {
  LinkedList list;
  testAdd(list);
  // list.print();
  std::cout << list << " And the size of the list is  " << list.size() << std::endl;
  return 0;
}
