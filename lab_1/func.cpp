//
// Created by ASUS on 01.03.2023.
//

#include "func.h"
#include <iostream>
using namespace std;


int main() {
    //3 остаток
    int first, second;

    cout << "first number ";
    cin >> first;
    cout << "second number ";
    cin >> second;
    ost_links(first,second);

    cout << "first number ";
    cin >> first;
    cout << "second number ";
    cin >> second;
    ost_pointers(&first, &second);

    ost_test();

    //6 округление
    float num;
    cout << "number for rounding ";
    cin >> num;
    round_links(num);

    cout << "number for rounding ";
    cin >> num;
    round_pointers(&num);

    round_test();

    // 11
    float radius , x;
    cout << "radius ";
    cin >> radius;
    cout << "how much less ";
    cin >> x;
    try {
        radius_links(radius, x);
    } catch (exception const &e) {
        //sms->send
        std::cerr << "error occurred: " << e.what() << "\n";
    }


    cout << "radius ";
    cin >> radius;
    cout << "how much less ";
    cin >> x;
    try {
        radius_pointers(&radius, &x);
    } catch (exception const &e) {
        //sms->send
        std::cerr << "error occurred: " << e.what() << "\n";
    }

    radius_test();

    // 14

    cout << "matrix " << endl;
    vector<vector<int>> vec (3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int value;
            cin >> value;
            vec[i].push_back(value);}
    }

    matrix_links(vec);


    cout << "matrix " << endl;
    vector<vector<int>> vec (3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int value;
            cin >> value;
            vec[i].push_back(value);}
    }

    matrix_pointers(&vec);


            return 0;
        }


