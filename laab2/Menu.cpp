//
// Created by ASUS on 04.03.2023.
//

#include <iostream>
#include "Menu.h"

Menu::Menu() : fileStream() {};

Menu::Menu(std::string filename) : fileStream(std::move(filename)) {};

void showMenu() {
    std::cout << "Choose the case:\n";
    std::cout << "1) Open the file\n";
    std::cout << "2) Close the file\n";
    std::cout << "3) Get the file's name\n";
    std::cout << "4) Check if the file is opened\n";
    std::cout << "5) Write a string in the file\n";
    std::cout << "6) Write an integer in the file\n";
    std::cout << "7) Write a real figure in the file\n";
    std::cout << "0) End the program\n";
}

void Menu::run() {
    bool hasNextAction = true;
    while (hasNextAction) {
        try {
            showMenu();
            hasNextAction = processAction();
        }
        catch (const std::exception& e) {
            std::cerr << "error occurred: " << e.what() << "\n";
        }
    }
};

bool Menu::processAction() {
    int userInput;
    std::cin >> userInput;
    switch (userInput){
        case 1:
            fileStream.open();
            break;
        case 2:
            fileStream.close();
            break;
        case 3: {
            std::cout << "Enter file name: ";
            std::string fileName;
            std::getline(std::cin, fileName);
            fileStream.setName(fileName);
            break;
        }
        case 4:
            std::cout << (fileStream.isFileOpened() ? "Yes" : "No");
            break;
        case 5: {
            std::cout << "Write string: ";
            std::string str;
            std::getline(std::cin, str);
            fileStream.write(str);
            break;
        }
        case 6: {
            std::cout << "Write integer: ";
            int number;
            std::cin >> number;
            fileStream.write(number);
            break;
        }
        case 7: {
            std::cout << "Write real: ";
            float number;
            std::cin >> number;
            fileStream.write(number);
            break;
        }
        case 0:
            std::cout << "The program has been finished.\n";
            return false;
        default:
            std::cout << "There is no such command.\n";
            break;
    }

    return true;
}

