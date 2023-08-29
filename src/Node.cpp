/**
* @file NODE.CPP
* @description TEK YÖNLÜ BAĞLI LİSTE
* @course 1/A GRUBU
* @assignment 1.ÖDEV
* @date 26/07/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#include "Node.hpp"

Node::Node(int dataValue, Node* nextNode) : data(dataValue), next(nextNode) {}


void Node::add_node(int data, Node*& listHead) {
    Node* newNode = new Node(data, nullptr);

    if (listHead == nullptr) {
        listHead = newNode;
    } else {
        Node* current = listHead;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}
