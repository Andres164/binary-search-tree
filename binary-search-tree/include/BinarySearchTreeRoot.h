#pragma once
#include "DataStructureNode.h"


class BinarySearchTreeRoot : public DataStructureNode
{
public:
    int data;
    DataStructureNode* ptr_leftNode;
    DataStructureNode* ptr_rightNode;
public:
    BinarySearchTreeRoot();
    BinarySearchTreeRoot(int value);

    int getData() override;

    void insertElement(int element) override;
    void removeElement(int element) override;
    int fetchElement(int element) override;
    void printElementsInOrder() override;
};
