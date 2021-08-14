#include "BinarySearchTreeRoot.h"

BinarySearchTreeRoot::BinarySearchTreeRoot() {}
BinarySearchTreeRoot::BinarySearchTreeRoot(int value)
    : data(value), ptr_leftNode(NULL), ptr_rightNode(NULL) {}

int BinarySearchTreeRoot::getData() { return this->data; }

void BinarySearchTreeRoot::insertElement(int element)
{
    if(element < this->data)
    {
        if(this->ptr_leftNode != NULL)
            this->ptr_leftNode->insertElement(element);
        else {
            this->ptr_leftNode = new BinarySearchTreeNode(element);
        }
    }else {
        if(this->ptr_rightNode != NULL)
            this->ptr_rightNode->insertElement(element);
        else {
            this->ptr_rightNode = new BinarySearchTreeNode(element);
        }
    }
}
void BinarySearchTreeRoot::removeElement(int element)
{

}
int BinarySearchTreeRoot::fetchElement(int element)
{

}
void BinarySearchTreeRoot::printElementsInOrder()
{

}


//BSTNode
BinarySearchTreeNode::BinarySearchTreeNode(int value)
    : BinarySearchTreeRoot(), data(value), ptr_leftNode(NULL), ptr_rightNode(NULL) {}

