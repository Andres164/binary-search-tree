#pragma once
#include "DataStructureNode.h"


class BinarySearchTreeRoot : public DataStructureNode
{
protected:
    int data;
    DataStructureNode* ptr_leftNode;
    DataStructureNode* ptr_rightNode;
public:
    BinarySearchTreeRoot(int value);

    int getData() override;

    void insertElement(int element) override;
    void removeElement(int element) override;
    int fetchElement(int element) override;
    void printElementsInOrder() override;
};