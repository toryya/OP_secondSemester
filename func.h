//
// Created by ASUS on 01.03.2023.
//

#ifndef LAB1_FUNC_H
#define LAB1_FUNC_H
#include <cmath>
#include <iostream>
using namespace std;

// #3
// изменение большей из двух переменных на её остаток от деления на вторую переменную

int tmp;

// через ссылки
void ost_links(int& a, int& b){

    if (a > b){
        tmp = a % b;
        a = tmp;
        cout <<  a << endl;
    }else{
        tmp = b % a;
        b = tmp;
        cout << b << endl;
    }
}
// через указатели
void ost_pointers(int* a, int* b){

    if (*a > *b){
        tmp = *a % *b;
        *a = tmp;
        cout << *a << endl;
    }else{
        tmp = *b % *a;
        *b = tmp;
        cout << *b << endl;
    }

}

void ost_test(){
    int a = 38;
    int b = 4;
    if (38 % 4 == 2){
        cout << "\n test is Correct \n" << endl;
    }else{
        cout << "\n test is inCorrect \n" << endl;
    }
}


// 6
// округление вещественное числа
class Circle {
public:

};

void round_links(float& num){

    int answer;
    answer = round(num);
    cout << answer << "\n";
}
void round_pointers (float* num){

    int *answer;
    *answer = round(*num);
    cout << *answer << "\n";

}
void round_test(){
    float num = 7.86756;
    int answer = round(num);
    if ( answer == 8){
        cout << "\n test is Correct \n" << endl;
    }else{
        cout << "\n test is inCorrect \n" << endl;
    }
}


// 11
// уменьшение радиуса окружности на заданное число
void radius_links(float& radius, float& x){
    if (radius >= x){
        radius = radius - x;
        cout << radius << endl;
    }else{
        cout << "error \n" << endl;
    }
}

void radius_pointers(float* radius, float* x){
    if (*radius >= *x){
        *radius = *radius - *x;
        cout << *radius << endl;
    }else{
        cout << "error \n" << endl;
    }
}

void radius_test(){
    int radius = 7;
    int x = 2;
    radius -= x;
    if (radius == 5){
        cout << "\n test is Correct \n" << endl;
    }else{
        cout << "\n test is inCorrect \n" << endl;
    }
}

// 14
// Транспонирование квадратной матрицы 3x3.
void matrix_links(int (&a)[3][3]){

    int i ,j,arr [3][3];

    for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
            arr[i][j] = a[j][i];
        }
    }

    cout << "transp matrix " << endl;

    for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }

}

void matrix_pointers(int (*a)[3]){

    int i ,j,arr [3][3];

    for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
            arr[i][j] = a[j][i];
        }
    }

    cout << "transp matrix " << endl;

    for (int i = 0; i < 3 ; i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
}

#endif //LAB1_FUNC_H
