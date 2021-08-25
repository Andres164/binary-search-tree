#pragma once
#include "BinarySearchTreeRoot.h"

class BinarySearchTreeNode : protected BinarySearchTreeRoot
{
    DataStructureNode* ptr_parentNode;
public:
    BinarySearchTreeNode(int value);

    friend class BinarySearchTreeRoot;
};
