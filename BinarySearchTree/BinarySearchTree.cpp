#include <iostream>
#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(){
        root = NULL;
}

BinarySearchTree::~BinarySearchTree(){
        root = NULL;
}

void BinarySearchTree::print(){
        printHelper(root);
}
void BinarySearchTree::printHelper(BinaryTreeNode* nodePointer){
        // std::cout << "value of this is: " << nodePointer->data << '\n';
        if (nodePointer !=NULL) {
                /* code */
                std::cout << "my values: " << nodePointer->data << '\n';
                printHelper(nodePointer->left);
                printHelper(nodePointer->right);
        }
}

bool BinarySearchTree::contains(int value){
        return contains(root,value);
}
bool BinarySearchTree::contains(BinaryTreeNode* nodePointer, int value){
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

void BinarySearchTree::printSideways (){
        printSidewaysHelper(root,"");
}
void BinarySearchTree::printSidewaysHelper(BinaryTreeNode* nodePointer, std::string ident){
        // std::cout << "value of this is: " << nodePointer->data << '\n';
        if (nodePointer !=NULL) {
                printSidewaysHelper(nodePointer->right, ident +  "    ");
                std::cout << ident << nodePointer->data  << '\n';
                printSidewaysHelper(nodePointer->left,  ident + "    ");
        }
}

void BinarySearchTree::add(int value){
        addHelper(root, value);
        /****============ old and simple approch used in print where the binarytree nodes are copied =========================
              // if (root == NULL) {
              //         root = new BinaryTreeNode(value);
              // }else{
              //         std::cout << "root is: " << root->data << '\n';
              //
              // }
         *********/
}
void BinarySearchTree::addHelper(BinaryTreeNode*& nodePointer, int value){
        if (nodePointer == NULL) {
                nodePointer = new BinaryTreeNode(value);
        }else if(value > nodePointer->data) {
                addHelper(nodePointer->right, value);
        }else if(value < nodePointer->data ) {
                addHelper(nodePointer->left, value);
        }
/****============ old and simple approch used in print where the binarytree nodes are copied ( call-by-value) other approch is pass the refrence itself (call-by-refrence) =========================


   // if (value > nodePointer->data ) {
   //         if (nodePointer->right ==  NULL) {
   //                 nodePointer->right = new BinaryTreeNode(value);
   //         }else{
   //                 addHelper(nodePointer->right, value);
   //         }
   // }else if (value < nodePointer->data ) {
   //         if (nodePointer->left ==  NULL) {
   //                 nodePointer->left = new BinaryTreeNode(value);
   //         }else{
   //                 addHelper(nodePointer->left, value);
   //         }
   // }

   ==========================================*/
}

int BinarySearchTree::getMin(){
        if (root == NULL) {
                std::cout << "Get out of here no tree found" << '\n';
        }else{
                return getMinHelper(root);
        }
}
int BinarySearchTree::getMinHelper(BinaryTreeNode* nodePointer){
        if (nodePointer->left != NULL) {
                getMinHelper(nodePointer->left);
        }else{
                return nodePointer->data;
        }
}
