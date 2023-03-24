//
// Created by ASUS on 18.03.2023.
//

#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::initFromDialog()
{
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter center(x, y): ";
    cin >> center.x >> center.y;
    cout << "Enter mass: ";
    cin >> _mass;
}
CVector2D Rectangle::position() const
{
    return center;
}

double Rectangle::mass() const
{
    return _mass;
}

double Rectangle::perimeter() const
{
    return (width + height)*2;
}
double Rectangle::square() const
{
    return  (width * height);
}

void Rectangle::draw() const
{
    cout << "Height: " << height << endl;
    cout << "Width: " << width << endl;
    cout << "Center(x, y): " << center.x << ", " << center.y << endl;
    cout << "mass: " << _mass << endl;
}

const char* Rectangle::classname() const
{
    return "rectangle";
}

size_t Rectangle::size() const
{
    return sizeof(height) + sizeof(width) + sizeof(center) + sizeof(_mass);
}
