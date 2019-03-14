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
//  list.insert(4, 1654);
        list.add(7);
        list.add(8);
        // std::cout << "Finished adding all the elements ."<< list  << std::endl;
}


void testRemove(LinkedList& list){
        // std::cout << "Removing element form the list of index: ";
        // std::cout << "size is " <<list.size() << '\n';
        // list.remove(2);
        // std::cout << "size is " <<list.size() << '\n';
        // list.remove(5);
        // std::cout << "size is " <<list.size() << '\n';
        // list.remove(8);
        // std::cout << "size is " <<list.size() << '\n';
        // list.remove(-1);
        // std::cout << "size is " <<list.size() << '\n';
        // list.remove(0);
        std::cout << "size is " <<list.size() << '\n';
        list.remove(list.size() - 1 );
        // list.remove(500);
        // std::cout << "size is " <<list.size() << '\n';
        // list.remove('d2');
}

int main() {
        LinkedList list;
        testAdd(list);
        std::cout << "printing list. " << std::endl;
        // list.print();
        std::cout << list << std::endl;
        testRemove(list);
        std::cout << list << std::endl;
        // std::cout << list << " And the size of the list is  " << list.size() << std::endl;
        return 0;
}
