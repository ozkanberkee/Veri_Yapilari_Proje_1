/**
* @file FILEREADER_HPP
* @description TEK YÖNLÜ BAĞLI LİSTE
* @course 1/A GRUBU
* @assignment 1.ÖDEV
* @date 26/07/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#ifndef FILEREADER_HPP
#define FILEREADER_HPP

#include <string>
#include <fstream>
#include <list>

class FileReader {
public:
    FileReader(const std::string& filename);
    ~FileReader();
    std::list<std::string> readLines();
    std::ifstream inputFile;
    static std::list<std::string> splitString(const std::string& line, const std::string& delimiter);

private:
    
};

#endif 