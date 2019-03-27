#include <iostream>
#include "BinaryTree.h"

BinaryTree::BinaryTree(BinaryTreeNode* initialRoot){
        root = initialRoot;
}

void BinaryTree::print(){
        printHelper(root);
}

void BinaryTree::printHelper(BinaryTreeNode* nodePointer){
        // std::cout << "value of this is: " << nodePointer->data << '\n';
        if (nodePointer !=NULL) {
                /* code */
                std::cout << "my values: " << nodePointer->data << '\n';
                printHelper(nodePointer->left);
                printHelper(nodePointer->right);
        }
}

bool BinaryTree::contains(int value){
        return contains(root,value);
}
bool BinaryTree::contains(BinaryTreeNode* nodePointer, int value){
        if (nodePointer == NULL) {
                return false;
        }else if (nodePointer->data == value) {
                return true;
        }else{
                /* bool leftBool = contains(nodePointer->left, value);
                   bool rightBool = contains(nodePointer->right, value);
                   return leftBool || rightBool; */
                /*::::::::BETTER VERSION OF THIS IS AS FOLLOWS::::::*/
                return contains(nodePointer->left, value) || contains(nodePointer->right, value);
        }
}

void BinaryTree::printSideways (){
        printSidewaysHelper(root,"");
}
void BinaryTree::printSidewaysHelper(BinaryTreeNode* nodePointer, std::string ident){
        // std::cout << "value of this is: " << nodePointer->data << '\n';
        if (nodePointer !=NULL) {
                printSidewaysHelper(nodePointer->right, ident +  "    ");
                std::cout << ident << nodePointer->data  << '\n';
                printSidewaysHelper(nodePointer->left,  ident + "    ");
        }
}
