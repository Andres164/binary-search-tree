#include <iostream>
#include "dataStructures.h"

using namespace std;

int main()
{
    BinarySearchTreeRoot* ptr;
    ptr = new BinarySearchTreeRoot(4);


    ptr->insertElement(6);
    ptr->insertElement(2);
    ptr->insertElement(1);
    ptr->insertElement(5);

    cout << ptr->getData() << endl;
    //ptr->fetchElement(4);
    /*
    ptr->fetchElement(2);
    ptr->fetchElement(1);
    ptr->fetchElement(5);*/
    //ptr->fetchElement(6);
/*
    cout << ptr->ptr_rightNode->data << endl;
    cout << ptr->ptr_leftNode->data << endl;
    cout << ptr->ptr_leftNode->ptr_previouesNode->data << endl;
    cout << ptr->ptr_leftNode->ptr_nextNode->data << endl;*/

    if(ptr->get_ptr_nextNode() != NULL)
        cout << ptr->get_ptr_nextNode()->getData() << endl;
    else
        cout << "valio caquita" << endl;
    cout << ptr->get_ptr_previouesNode()->getData() << endl;

    return 0;
}
