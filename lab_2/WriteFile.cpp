//
// Created by ASUS on 04.03.2023.
//

#include "WriteFile.h"
#include <iostream>
#include <string>
#include <utility>

WriteFile::WriteFile(std::string fileName) : name(std::move(fileName)) {}

void WriteFile::open() {
    file.open(name, std::ios::app);
}

void WriteFile::close() {
    file.close();
}

bool WriteFile::isFileOpened() {
    return file.is_open();
}

void WriteFile::write(std::string str) {
    file << str;
}

void WriteFile::write(int number) {
    file << number;
}

void WriteFile::write(float number) {
    file << number;
}

void WriteFile::setName(std::string fileName){
    name = std::move(fileName);
}

WriteFile::~WriteFile() {
    close();
};
