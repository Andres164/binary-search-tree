#pragma once
#include <iostream>

using namespace std;

class DataStructureNode
{
public:
    int data;
    DataStructureNode* ptr_previouesNode;
    DataStructureNode* ptr_nextNode;

    virtual void setData(int newData);
public:
    virtual int getData() =0;

    virtual void insertElement(int element) =0;
    virtual void removeElement(int element) =0;
    virtual int fetchElement(int element) =0;
    virtual void printElementsInOrder() =0;

};
