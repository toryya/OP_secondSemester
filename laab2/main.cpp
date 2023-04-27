#include <iostream>
#include "Menu.cpp"

using namespace std;

int main(int argc, char *argv[]){
    if (argc == 0){
        (new Menu())->run();
    }
    else if (argc == 1){
        std::string filename = argv[0];
        (new Menu(filename))->run();
    }
    return 0;
}