/**
* @file FILEREADER.CPP
* @description TEK YÖNLÜ BAĞLI LİSTE
* @course 1/A GRUBU
* @assignment 1.ÖDEV
* @date 26/07/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#include "FileReader.hpp"

FileReader::FileReader(const std::string& filename) {
    inputFile.open(filename);
    if (!inputFile) {
        throw std::runtime_error("Dosya acilamadi!");
    }
}

FileReader::~FileReader() {
    if (inputFile.is_open()) {
        inputFile.close();
    }
}
std::list<std::string> FileReader::splitString(const std::string& line, const std::string& delimiter) {
    std::list<std::string> strings;
    size_t start = 0;
    size_t end = line.find(delimiter);

    while (end != std::string::npos) {
        strings.push_back(line.substr(start, end - start));
        start = end + delimiter.length();
        end = line.find(delimiter, start);
    }

    if (start < line.length()) {
        strings.push_back(line.substr(start));
    }

    return strings;
}
//Satır satır okuma işlemi
std::list<std::string> FileReader::readLines() {
    std::list<std::string> lines;
    std::string line;

    while (std::getline(inputFile, line)) {
        lines.push_back(line);
    }

    return lines;
}

