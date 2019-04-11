#ifndef _binarynode_h
#define _binarynode_h

#include <iostream>
#include <string>

struct BinaryTreeNode {
        int data;
        BinaryTreeNode* right;
        BinaryTreeNode* left;

        BinaryTreeNode(int d=0, BinaryTreeNode* l = NULL, BinaryTreeNode* r = NULL){
                data = d;
                this->right = r;
                this->left = l;
                std::cout << "Binary node constructor" << std::endl;
        }
};

class BinarySearchTree {

private:
BinaryTreeNode* root;
void printHelper(BinaryTreeNode*);
bool contains(BinaryTreeNode*,int);
void printSidewaysHelper(BinaryTreeNode*,std::string);
void addHelper(BinaryTreeNode*&, int value);
int getMinHelper(BinaryTreeNode*);


public:
//construtor & destructor
BinarySearchTree();
~BinarySearchTree();

//Other functionalities
void print();
bool contains(int);
void printSideways();
void add(int value);
int getMin();
};
//isEmpty
//remove


#endif
