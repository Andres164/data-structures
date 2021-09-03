#include "../Headers/DataStructureNode.h"

DataStructureNode::DataStructureNode()
    : ptr_previouesNode(NULL), ptr_nextNode(NULL) {}
DataStructureNode::DataStructureNode(int value)
    : data(value), ptr_previouesNode(NULL), ptr_nextNode(NULL) {}

void DataStructureNode::setData(int newData) { this->data = newData; }
void DataStructureNode::set_ptr_previouesNode(DataStructureNode* ptr) { this->ptr_previouesNode = ptr; }
void DataStructureNode::set_ptr_nextNode(DataStructureNode* ptr) { this->ptr_nextNode = ptr; }

int DataStructureNode::getData() { return this->data; }
DataStructureNode* DataStructureNode::get_ptr_previouesNode() { return this->ptr_previouesNode; }
DataStructureNode* DataStructureNode::get_ptr_nextNode() { return this->ptr_nextNode; }
DataStructureNode* DataStructureNode::get_lastElement()
{
    if(this->get_ptr_nextNode() != NULL)
        this->get_ptr_nextNode()->get_lastElement();
    else
        return this;
}
