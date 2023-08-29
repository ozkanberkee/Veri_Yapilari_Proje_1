/**
* @file LINKEDLIST_HPP 
* @description TEK YÖNLÜ BAĞLI LİSTE
* @course 1/A GRUBU
* @assignment 1.ÖDEV
* @date 26/07/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#if !defined(LinkedList_HPP)
#define LinkedList_HPP
#include <iostream>
#include <string>
#include <list>
#include "Node.hpp"
class LinkedList {
public:
  int currentLine;
    int getCurrentLine() const; 

 Node* onesDigitHeads[100000] = {nullptr}; //Onlar basamağının baş düğümlerini işaret eder
    Node* tensDigitHeads[100000] = {nullptr}; //Birler basamağının baş düğümlerini işaret eder
    LinkedList();
    ~LinkedList();

    void add_node(int data, Node*& listHead);
    void swap_nodes(Node*& list1Head, Node*& list2Head);
    void calculate_and_print_ten_averages(int listCount);
    void calculate_and_print_one_averages(int listCount);
    void print_list(Node* listHead);
private:
   
};

#endif // LinkedList_HPP
