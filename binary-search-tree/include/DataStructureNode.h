#pragma once
#include <iostream>

using namespace std;

class DataStructureNode
{
protected:
    int data;
    DataStructureNode* ptr_previouesNode;
    DataStructureNode* ptr_nextNode;

    void setData(int newData);
    void set_ptr_previouesNode(DataStructureNode* ptr);
    void set_ptr_nextNode(DataStructureNode* ptr);

    virtual DataStructureNode* getPtrToElement(int element) = 0;
public:
    DataStructureNode();
    DataStructureNode(int value);

    int getData();
    DataStructureNode* get_ptr_previouesNode();
    DataStructureNode* get_ptr_nextNode();

    virtual void insertElement(int element) =0;
    virtual void removeElement(int element) =0;
    virtual void fetchElement(int element) =0;
    virtual void printElementsInOrder() =0;

};
