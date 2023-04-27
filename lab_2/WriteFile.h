//
// Created by ASUS on 04.03.2023.
//

#ifndef LAAB2_WRITEFILE_H
#define LAAB2_WRITEFILE_H


#include <iostream>
#include <string>
#include <fstream>

class WriteFile {
private:
    std::fstream file;
    std::string name;
public:
    WriteFile();

    explicit WriteFile(std::string);

    void open();

    void close();

    bool isFileOpened();

    void write(std::string);

    void write(int);

    void write(float);

    void setName(std::string);

    ~WriteFile();
};

#endif //LAAB2_WRITEFILE_H
