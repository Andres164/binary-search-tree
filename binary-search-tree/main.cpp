#include <iostream>
#include "dataStructures.h"

using namespace std;

int main()
{
    DataStructureNode* ptr;
    ptr = new BinarySearchTreeRoot(4);


    ptr->insertElement(6);
    ptr->insertElement(2);
    ptr->insertElement(1);
    ptr->insertElement(5);

    ptr->printElementsInOrder();

    return 0;
}
