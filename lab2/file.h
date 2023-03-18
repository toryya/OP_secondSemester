//
// Created by ASUS on 04.03.2023.
//

#ifndef LAB2_FILE_H
#define LAB2_FILE_H

#include <iostream>
#include <fstream>
using namespace std;

class File {
public:
    ofstream file;
    string file_name = "";
    void start(){
        int a;
        bool B=true;
        while (B) {
            menu();
            cin >> a;
            switch (a){
                case 1:
                    open();
                    break;
                case 2:
                    close();
                    break;
                case 3:
                    get_name();
                    break;
                case 4:
                    check_open();
                    break;
                case 5:
                    write_string();
                    break;
                case 6:
                    write_integer();
                    break;
                case 7:
                    write_float();
                    break;
                default:
                    cout << "no such command! \n";
                    break;
            }
        }
    };
    void open(){
        cout << "enter file name: ";
        cin >> file_name;
        file.open(file_name);

    };
    void close(){
        file.close();
    };

    void get_name(){
        if (file_name != "") {
            cout << "name file: " << file_name << "\n";
        }else{
            cout << "file isn't open \n";
        }
    }

    int  check_open(){
        if (!file.is_open()){
            cout << "file closed \n";
            return -1;
        }
        else{
            cout << "file open \n";
            return 1;
        }
    }

    void write_string(){
        string s;
        cout << "write: ";
        cin >> s;

        if (file.is_open()){
            file << s << endl;
        } else{
            cout << "file isn't open( ";
        }
    }
    void write_integer(){
        int a;
        cout << "write: ";
        cin >> a;

        if (file.is_open()){
            file << a << endl;
        } else{
            cout << "file isn't open( ";
        }
    }

    void write_float(){
        float f;
        cout << "write: ";
        cin >> f;

        if (file.is_open()){
            file << f << endl;
        } else{
            cout << "file isn't open( ";
        }
    }


    void menu(){
        cout <<"choose:" << "\n";
        cout << "1/ open." << "\n";
        cout << "2/ close." << "\n";
        cout << "3/ get name of file." << "\n";
        cout << "4/ check open?? " << "\n";
        cout << "5/ writing to a string file" << "\n";
        cout << "6/ writing an integer to a file" << "\n";
        cout << "7/ writing a float number to a file" << "\n";
    }

};


#endif //LAB2_FILE_H
