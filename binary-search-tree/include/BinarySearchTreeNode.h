#pragma once
#include "BinarySearchTreeRoot.h"

class BinarySearchTreeNode : public BinarySearchTreeRoot
{
protected:
    int data;
    DataStructureNode* ptr_leftNode;
    DataStructureNode* ptr_rightNode;
public:
BinarySearchTreeNode(int value);

    friend class BinarySearchTreeRoot;
};
