#include "BinarySearchTreeRoot.h"


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
            this->ptr_leftNode = new BinarySearchTreeNode();
            this->ptr_leftNode->setData(element);
        }
    }else {
        if(this->ptr_rightNode != NULL)
            this->ptr_rightNode->insertElement(element);
        else {
            this->ptr_rightNode = new BinarySearchTreeNode();
            this->ptr_rightNode->setData(element);
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
