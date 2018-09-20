#include <iostream>
#include "LinkNode.h"

void print(Listnode* front){
	std::cout << "our  list nodes looks like this" << '\n';
	while (front != NULL) {
		std::cout << front-> data << std::endl;
		front = front -> next;
	}
}

int main(){
	Listnode* node1 = new Listnode();
	node1 -> data = 42;

	//node 2
	node1 -> next = new Listnode();
	node1 -> next -> data = 2;

	//node 3
	node1 -> next -> next = new Listnode();
	node1 -> next -> next -> data = 32;

	//node 4
	node1 -> next -> next -> next = new Listnode();
	node1 -> next -> next -> next -> data = -2;

	//ended node
	node1 -> next -> next -> next -> next = NULL;

	//print the node here
	print(node1);

return 0;
}
