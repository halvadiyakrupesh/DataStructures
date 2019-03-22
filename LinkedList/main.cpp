#include <iostream>
#include "LinkedList.cpp"
#include "LinkedList.h"

//  Write test for following:
// clear

void testAdd(LinkedList& list){
        list.add(5);
        list.add(-1);
        list.add(0);
        list.add(4);
        list.add(8);
        list.add(5);
        list.add(7);
        list.add(8);
        // std::cout << "Finished adding all the elements ."<< list  << std::endl;
}
void testInsert(LinkedList& list){
        list.insert(0, 1654);
        list.insert(1, 1654);
        list.insert(-10, 1654);
        list.insert(9, 1654);
        list.insert(500, 1654);
}
void testRemove(LinkedList& list){
        // std::cout << "Removing element form the list of index: ";
        // std::cout << "size is " <<list.size() << '\n';
        list.remove(2);
        // std::cout << "size is " <<list.size() << '\n';
        list.remove(5);
        // std::cout << "size is " <<list.size() << '\n';
        list.remove(8);
        // std::cout << "size is " <<list.size() << '\n';
        list.remove(-1);
        // std::cout << "size is " <<list.size() << '\n';
        list.remove(0);
        std::cout << "size is " <<list.size() << '\n';
        list.remove(list.size() - 1 );
        list.remove(500);
        // std::cout << "size is " <<list.size() << '\n';
        list.remove('d2');
}
void testisEmpty(LinkedList& list){
        bool status = list.isEmpty();
        std::cout << "status for isEmpty: " << (status ? "True" : "False") << '\n';

}
void testSize(LinkedList& list){
        int size = list.size();
        std::cout << "size:  " << size << '\n';

}
void testSet(LinkedList& list){
        list.set(list.size() -1, 500);
        list.set(-1, 500);
        list.set(0, 500);
        list.set(list.size() +1, 500);
        list.set(4,500);
}
void testGet(LinkedList& list){
        int value = list.get(list.size() -1);
        std::cout << "value at " << (list.size() -1)<< " is "<< value << '\n';
        int value1 = list.get(-1);
        std::cout << "value at " << -1<< " is "<< value1 << '\n';
        int value2 = list.get(0);
        std::cout << "value at " << 0 << " is "<< value2 << '\n';
        int value3 = list.get(list.size() +1);
        std::cout << "value at " << (list.size() +1)<< " is "<< value3 << '\n';
        int value4 = list.get(4);
        std::cout << "value at " << 4 << " is "<< value4 << '\n';
}
// void testClear(LinkedList& list){
        // list.clear();
// }

int main() {
        LinkedList list;
        testisEmpty(list);
        testSize(list);
        testAdd(list);
        testSet(list);
        // testInsert(list);
        // testisEmpty(list);
        std::cout << "printing list. " << std::endl;
        // list.print();
        std::cout << list << std::endl;
        std::cout << list << std::endl;
        testSize(list);
        std::cout << "calling Clear" << '\n';
        // list.clear();
        testSize(list);
        // testRemove(list);
        // std::cout << list << std::endl;
        // std::cout << list << " And the size of the list is  " << list.size() << std::endl;
        return 0;
}
