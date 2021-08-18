#include "BinarySearchTreeRoot.h"
#include "BinarySearchTreeNode.h"

BinarySearchTreeRoot::BinarySearchTreeRoot()
    :ptr_leftNode(NULL), ptr_rightNode(NULL) {}

BinarySearchTreeRoot::BinarySearchTreeRoot(int value)
    : data(value), ptr_leftNode(NULL), ptr_rightNode(NULL) {}

int BinarySearchTreeRoot::getData() { return this->data; }

void BinarySearchTreeRoot::insertElement(int element)
{
    if(element < this->data)
    {
        cout << "element < data" << endl;
        if(this->ptr_leftNode != NULL)
            this->ptr_leftNode->insertElement(element);
        else {
            this->ptr_leftNode = new BinarySearchTreeNode(element);
            cout << "created new BSTNode to the left node" << endl;
        }
    }else {
        cout << "element > data" << endl;
        if(this->ptr_rightNode != NULL)
            this->ptr_rightNode->insertElement(element);
        else {
            this->ptr_rightNode = new BinarySearchTreeNode(element);
            cout << "created new BSTNode to the right node" << endl;
        }
    }
}
void BinarySearchTreeRoot::removeElement(int element)
{

}
void BinarySearchTreeRoot::fetchElement(int element)
{
    if(element < this->data && this->ptr_leftNode != NULL)
        this->ptr_leftNode->fetchElement(element);
    else if(element > this->data && this->ptr_rightNode != NULL)
        this->ptr_rightNode->fetchElement(element);
    else if(element == this->data)
        cout << element << " Is an element of this BST" << endl;
    else
        cout << element << " Is not part of this BST" << endl;
}
void BinarySearchTreeRoot::printElementsInOrder()
{

}



