#include "../Headers/LinkedListNode.h"

LinkedListNode::LinkedListNode(int value) : DataStructureNode(value) { }

DataStructureNode* LinkedListNode::getPtrToElement(int element)
{

}

void LinkedListNode::insertElement(int element){ this->set_ptr_nextNode(new LinkedListNode(element)); }
void LinkedListNode::removeElement(int element)
{

}
void LinkedListNode::fetchElement(int element)
{
    if(this->get_ptr_nextNode() != NULL)
    if(this->getData() !=)
}
void LinkedListNode::printElementsInOrder()
{

}
