/**
* @file LINKEDLIST.CPP 
* @description TEK YÖNLÜ BAĞLI LİSTE
* @course 1/A GRUBU
* @assignment 1.ÖDEV
* @date 26/07/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#include "LinkedList.hpp"
#include "Node.hpp"
#include <iostream>
#include <iomanip>

LinkedList::LinkedList() {}

LinkedList::~LinkedList() {
    Node* temp;
    for (int i = 0; i < 100; i++) {
        while (tensDigitHeads[i] != nullptr) {
            temp = tensDigitHeads[i];
            tensDigitHeads[i] = tensDigitHeads[i]->next;
            delete temp;
        }
        while (onesDigitHeads[i] != nullptr) {
            temp = onesDigitHeads[i];
            onesDigitHeads[i] = onesDigitHeads[i]->next;
            delete temp;
        }
    }
}

void LinkedList::add_node(int data, Node*& listHead) {
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

void LinkedList::swap_nodes(Node*& list1Head, Node*& list2Head) {
    Node* temp = list1Head;
    list1Head = list2Head;
    list2Head = temp;

 
}

void LinkedList::print_list(Node* listHead) {
    Node* current = listHead;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void LinkedList::calculate_and_print_ten_averages(int listCount) {
    const int MAX_DIGITS = 100; // Toplamak istediğimiz düğüm sayısı (1'den 4'e kadar)

    // totalSums ve validCounts dizilerini dinamik olarak oluşturuyoruz
    int* totalSums = new int[MAX_DIGITS];
    int* validCounts = new int[MAX_DIGITS];

    // Başlangıçta dizileri sıfırlıyoruz
    for (int i = 0; i < MAX_DIGITS; i++) {
        totalSums[i] = 0;
        validCounts[i] = 0;
    }

    for (int i = 0; i < listCount; i++) {
        Node* current = tensDigitHeads[i]; // Listenin baş düğümüne işaret edecek

        int nodeNum = 0;
        while (current != nullptr && nodeNum < MAX_DIGITS) {
            if (current->data != -1) { // Düğüm değeri 0 değilse geçerli sayacı artır ve toplama işlemine dahil et
                totalSums[nodeNum] += current->data;
                validCounts[nodeNum]++;
            }
            nodeNum++;
            current = current->next;
        }
    }

    float totalAverage = 0;
    for (int nodeNum = 0; nodeNum < MAX_DIGITS; nodeNum++) {
        if (validCounts[nodeNum] > 0) {
            float average = static_cast<float>(totalSums[nodeNum]) / validCounts[nodeNum];
            totalAverage += average;
            
        }
    }

    std::cout << "Ust: " << totalAverage << std::endl;

    // Hafıza geri veriliyor
    delete[] totalSums;
    delete[] validCounts;
}


void LinkedList::calculate_and_print_one_averages(int listCount) {
   const int MAX_DIGITS = 100; // Toplamak istediğimiz düğüm sayısı (1'den 4'e kadar)

    // totalSums ve validCounts dizilerini dinamik olarak oluşturuyoruz
    int* totalSums = new int[MAX_DIGITS];
    int* validCounts = new int[MAX_DIGITS];

    // Başlangıçta dizileri sıfırlıyoruz
    for (int i = 0; i < MAX_DIGITS; i++) {
        totalSums[i] = 0;
        validCounts[i] = 0;
    }

    for (int i = 0; i < listCount; i++) {
        Node* current = onesDigitHeads[i]; // Listenin baş düğümüne işaret edecek

        int nodeNum = 0;
        while (current != nullptr && nodeNum < MAX_DIGITS) {
            if (current->data != -1) { // Düğüm değeri 0 değilse geçerli sayacı artır ve toplama işlemine dahil et
                totalSums[nodeNum] += current->data;
                validCounts[nodeNum]++;
            }
            nodeNum++;
            current = current->next;
        }
    }

    float totalAverage = 0;
    for (int nodeNum = 0; nodeNum < MAX_DIGITS; nodeNum++) {
        if (validCounts[nodeNum] > 0) {
            float average = static_cast<float>(totalSums[nodeNum]) / validCounts[nodeNum];
            totalAverage += average;
            
        }
    }

    std::cout << "Alt: " << totalAverage << std::endl;

    // Hafıza geri veriliyor
    delete[] totalSums;
    delete[] validCounts;
}
