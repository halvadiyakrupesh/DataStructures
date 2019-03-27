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

class BinaryTree {

private:
BinaryTreeNode* root;
void printHelper(BinaryTreeNode*);
bool contains(BinaryTreeNode*,int);
void printSidewaysHelper(BinaryTreeNode*,std::string);

public:
BinaryTree(BinaryTreeNode*);
void print();
bool contains(int);
void printSideways();
};

#endif
