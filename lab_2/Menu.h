//
// Created by ASUS on 04.03.2023.
//

#ifndef LAAB2_MENU_H
#define LAAB2_MENU_H

#include <string>
#include "WriteFile.cpp"

class Menu {
private:
    WriteFile fileStream;
    bool processAction();
public:
    Menu();
    Menu(std::string);
    void run();
};

#endif //LAAB2_MENU_H




