/**
* @file NODE_HPP 
* @description TEK YÖNLÜ BAĞLI LİSTE
* @course 1/A GRUBU
* @assignment 1.ÖDEV
* @date 26/07/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#ifndef NODE_HPP
#define NODE_HPP

class Node {
public:
    int data;
    Node* next;
    
    // Yapıcı fonksiyonlar
    Node(int data, Node* next);
    
    void add_node(int data, Node*& listHead); // Fonksiyon bildirimi
};

#endif // NODE_HPP
