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
    radius_links(radius, x);

    cout << "radius ";
    cin >> radius;
    cout << "how much less ";
    cin >> x;
    radius_pointers(&radius, &x);

    radius_test();

    // 14
    cout << "matrix " << endl;
    int i ,j, a [3][3];
    for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    matrix_links(a);

    cout << "matrix " << endl;
    for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    matrix_pointers(a);


    return 0;
}
