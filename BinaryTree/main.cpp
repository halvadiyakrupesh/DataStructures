#include <iostream>
#include "BinaryTree.cpp"
#include "BinaryTree.h"

int main() {
        std::cout << "I am the main of binary tree..! vuhoo!" << '\n';
        BinaryTreeNode* node = new BinaryTreeNode(5);
        node->left = new BinaryTreeNode(6);
        node->right = new BinaryTreeNode(4);
        node->right->left = new BinaryTreeNode(1);
        node->right->right = new BinaryTreeNode(11);

        BinaryTree tree (node);
        tree.print();

        std::cout << "CONTAINS HERE: ==> " << std::boolalpha << tree.contains(1) << '\n';
        tree.printSideways();

        return 0;
}
