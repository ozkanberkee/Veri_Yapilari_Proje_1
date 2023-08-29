#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Node.hpp"
#include "LinkedList.hpp"
#include <list>
#include "FileReader.hpp"
#include "UserInput.hpp" 

using namespace std;

int main() {
    FileReader fileReader("sayilar.txt");
    list<string> lines = fileReader.readLines();

    int currentLine = 0;
    LinkedList myList;

    for (const auto& line : lines) {
        list<string> numbers = FileReader::splitString(line, " ");

        for (auto it = numbers.begin(); it != numbers.end(); ++it) {
            int number = stoi(*it);

            myList.add_node(number / 10, myList.tensDigitHeads[currentLine]);
            myList.add_node(number % 10, myList.onesDigitHeads[currentLine]);
        }
        currentLine++;
    }

    // Kullanıcıdan hangi listeleri yer değiştirmek istediğini al
    int list1, list2;
    UserInput userInput;
    userInput.getUserInput(list1,list2); 

    // Listelerin düğümlerini yer değiştir
    if (list1 >= 0 && list1 < currentLine && list2 >= 0 && list2 < currentLine) {
        myList.swap_nodes(myList.tensDigitHeads[list1], myList.onesDigitHeads[list2]);
    } else {
        cout << "Gecersiz liste numaralari!" << endl;
    }

    int listCount = currentLine;
    myList.calculate_and_print_ten_averages(listCount);
    myList.calculate_and_print_one_averages(listCount);

    return 0;
}
