#pragma once
#include "DataStructureNode.h"


class BinarySearchTreeRoot : public DataStructureNode
{
protected:
    virtual DataStructureNode* getPtrToElement(int element) override;
public:
    BinarySearchTreeRoot();
    BinarySearchTreeRoot(int value);

    void insertElement(int element) override;
    void removeElement(int element) override;
    void fetchElement(int element) override;
    void printElementsInOrder() override;
};
