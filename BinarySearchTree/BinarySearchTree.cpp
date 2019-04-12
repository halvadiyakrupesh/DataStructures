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

void BinarySearchTree::remove(int value){
        if (root == NULL) {
                std::cout << "Get out of here no tree found" << '\n';
        }else{
                std::cout << "root is " << root << "  " << value << '\n';
                removeHelper(root, value);
        }
}
void BinarySearchTree::removeHelper(BinaryTreeNode*& treePointer, int value){
        if (treePointer == NULL) {
                std::cout << "nothing to remove" << '\n';
        }else if (treePointer->data > value) {
                removeHelper(treePointer->left, value);
        }else if (treePointer->data < value) {
                removeHelper(treePointer->right, value);
        }else if (treePointer->data == value) {
                BinaryTreeNode* trash = NULL;
                //case 1: l&R both are NULL
                if (treePointer->left == NULL && treePointer->right == NULL ) {
                        std::cout << "I am going to delete myself" << '\n';
                        trash = treePointer;
                        treePointer = NULL;
                }else
                //case 2: l are NULL and R has value
                if (treePointer->left == NULL) {
                        std::cout << "I dont have children now I am going to replace with " <<treePointer->right->data << '\n';
                        trash = treePointer;
                        treePointer = treePointer->right;
                }else
                //case 3: r are NULL and l has value
                if (treePointer->right == NULL) {
                        trash = treePointer;
                        treePointer = treePointer->left;
                }
                // //case 4: l & r has value
                else{
                        int newDataValue = getMinHelper(treePointer->right);
                        std::cout << "minimum value needs  to be replaced is " << newDataValue << '\n';
                        treePointer->data = newDataValue;
                        removeHelper( treePointer->right, newDataValue );   // XXX
                }
                if (trash != NULL) {
                        delete trash;
                }
        }
}
