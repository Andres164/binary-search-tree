#include "BinarySearchTreeRoot.h"
#include "BinarySearchTreeNode.h"

BinarySearchTreeRoot::BinarySearchTreeRoot()
    : DataStructureNode() {cout << "BSTRoot created" << endl;}

BinarySearchTreeRoot::BinarySearchTreeRoot(int value)
    : DataStructureNode(value) {cout << "BSTRoot created" << endl;}

void BinarySearchTreeRoot::insertElement(int element)
{
    DataStructureNode* ptr_leftNode = this->get_ptr_previouesNode();
    DataStructureNode* ptr_rightNode = this->get_ptr_nextNode();
    int nodeData = this->getData();
    if(element < nodeData)
    {
        cout << "element < data" << endl;
        if(ptr_leftNode != NULL)
            ptr_leftNode->insertElement(element);
        else {
            this->set_ptr_previouesNode(new BinarySearchTreeNode(element));
            cout << "created new BSTNode to the left node" << endl;
        }
    }else {
        cout << "element > data" << endl;
        if(ptr_rightNode != NULL)
            ptr_rightNode->insertElement(element);
        else {
            this->set_ptr_nextNode(new BinarySearchTreeNode(element));
            cout << "created new BSTNode to the right node" << endl;
        }
    }
}
void BinarySearchTreeRoot::removeElement(int element)
{

}
void BinarySearchTreeRoot::fetchElement(int element)
{
    /*
    if(element < this->data && this->ptr_leftNode != NULL)
        this->ptr_leftNode->fetchElement(element);
    else if(element > this->data && this->ptr_rightNode != NULL)
        this->ptr_rightNode->fetchElement(element);
    else if(element == this->data)
        cout << element << " Is an element of this BST" << endl;
    else
        cout << element << " Is not part of this BST" << endl;
        */
}
void BinarySearchTreeRoot::printElementsInOrder()
{

}



