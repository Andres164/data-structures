#include "../Headers/LinkedListNode.h"

LinkedListNode::LinkedListNode(int value) : DataStructureNode(value) { }

DataStructureNode* LinkedListNode::getPtrToElement(int element)
{
    if(this->getData() != element)
    {
        if(this->get_ptr_nextNode() != NULL)
            this->get_ptr_nextNode()->getPtrToElement(element);
        else
            return NULL;
    }else
        return this;
}
void LinkedListNode::insertElement(int element){ this->get_lastElement()->set_ptr_nextNode(new LinkedListNode(element)); }

void LinkedListNode::removeElement(int element)
{
    DataStructureNode* ptr_elementToRemove = getPtrToElement(element);
    if(ptr_elementToRemove != NULL)
    {
        ptr_elementToRemove->get_ptr_previouesNode()->set_ptr_nextNode(ptr_elementToRemove->get_ptr_nextNode());
        /*ptr_elementToRemove->~DataStructureNode();*/
    } else
        cout << element << " is not an element in this linked list" << endl;
}
void LinkedListNode::fetchElement(int element)
{
    if(this->getData() != element)
    {
        if(this->get_ptr_nextNode() != NULL)
            this->get_ptr_nextNode()->fetchElement(element);
        else
            cout << element << " is not an element in this linked list" << endl;
    }else
        cout << element << " is an element in this linked list" << endl;

}
void LinkedListNode::printElementsInOrder()
{

}
