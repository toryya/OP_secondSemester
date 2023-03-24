//
// Created by ASUS on 18.03.2023.
//

#include "Trapezoid.h"
#include <iostream>
using namespace std;

void Trapezoid::initFromDialog()
{
    cout << "Enter edges: ";
    cin >> edge1 >> edge2;
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter bases: ";
    cin >> base1 >> base2;
    cout << "Enter center(x, y): ";
    cin >> center.x >> center.y;
    cout << "Enter mass: ";
    cin >> _mass;
}
CVector2D Trapezoid::position() const
{
    return center;
}

double Trapezoid::mass() const
{
    return _mass;
}

double Trapezoid::perimeter() const
{
    return (edge1 + edge2 + base1 + base2);
}
double Trapezoid::square() const
{
    return  h*(base1 + base2)/2;
}

void Trapezoid::draw() const
{
    cout << "Height: " << h << endl;
    cout << "First edge " << edge1 << endl;
    cout << "Second edge " << edge2 << endl;
    cout << "First base " << base1 << endl;
    cout << "Second base " << base2 << endl;
    cout << "Center(x, y): " << center.x << ", " << center.y << endl;
    cout << "mass: " << _mass << endl;
}

const char* Trapezoid::classname() const
{
    return "trapezoid";
}

size_t Trapezoid::size() const
{
    return sizeof(edge1) + sizeof(edge2) + sizeof(base1) + sizeof(base2)+ sizeof(center) + sizeof(_mass);
}