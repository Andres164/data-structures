#pragma once
#include "../Headers/DataStructureNode.h"

class LinkedListNode : public DataStructureNode
{
protected:
    virtual DataStructureNode* getPtrToElement(int element) override;
    LinkedListNode* get_lastElement();
public:
    LinkedListNode(int value);

    virtual void insertElement(int element) override;
    virtual void removeElement(int element) override;
    virtual void fetchElement(int element) override;
    virtual void printElementsInOrder() override;

};
