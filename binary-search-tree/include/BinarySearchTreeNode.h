#pragma once
#include "BinarySearchTreeRoot.h"

class BinarySearchTreeNode : public BinarySearchTreeRoot
{
public:
    BinarySearchTreeNode(int value);

    friend class BinarySearchTreeRoot;
};
