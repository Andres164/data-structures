#include <iostream>
#include "Headers/DataStructureNode.h"
#include "Headers/LinkedListNode.h"

using namespace std;

int main()
{
    DataStructureNode* ptr;
    ptr = new LinkedListNode(5);

    ptr->insertElement(6);

    return 0;
}
