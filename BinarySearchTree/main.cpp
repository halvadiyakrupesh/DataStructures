#include <iostream>
#include "BinarySearchTree.cpp"
#include "BinarySearchTree.h"

int main() {
        std::cout << "I am the main of binary tree..! vuhoo!" << '\n';
        // BinaryTreeNode* node = new BinaryTreeNode(5);
        // node->left = new BinaryTreeNode(6);
        // node->right = new BinaryTreeNode(4);
        // node->right->left = new BinaryTreeNode(1);
        // node->right->right = new BinaryTreeNode(11);

        BinarySearchTree tree;
        // BinaryTree tree (node);
        tree.add(7);
        tree.add(4);
        tree.add(9);
        tree.add(2);
        tree.add(1);
        tree.add(8);
        tree.add(5);
        tree.add(3);

        std::cout << "CONTAINS HERE: ==> " << std::boolalpha << tree.contains(1) << '\n';
        std::cout << "MINIMUM VALUE IS " << tree.getMin() << std::endl;
        tree.printSideways();


        return 0;
}
