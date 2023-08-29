/**
* @file USERINPUT.CPP 
* @description TEK YÖNLÜ BAĞLI LİSTE
* @course 1/A GRUBU
* @assignment 1.ÖDEV
* @date 26/07/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#include "UserInput.hpp"
#include <iostream>

void UserInput::getUserInput(int& list1, int& list2) {
    std::cout << "KonumA daki hangi listeyi KonumB ile  yer degistirmek istersiniz (Orn. 0 2): ";
    std::cin >> list1 >> list2;
}
