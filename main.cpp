#include <iostream>
#include "Headers/DataStructureNode.h"
#include "Headers/LinkedListNode.h"

using namespace std;

int main()
{
    DataStructureNode* ptr;
    ptr = new LinkedListNode(5);

    ptr->insertElement(6);
    ptr->insertElement(7);
    ptr->insertElement(10);

    ptr->removeElement(8);

    cout << endl;

    ptr->fetchElement(5);
    ptr->fetchElement(6);
    ptr->fetchElement(7);
    ptr->fetchElement(10);

    return 0;
}
