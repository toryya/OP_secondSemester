//
// Created by ASUS on 24.03.2023.
//

#ifndef LAB3_TRIANGLE_H
#define LAB3_TRIANGLE_H

#include <fstream>

class Triangle{
public:
    class Point{
    public:
        Point(double x_1, double y_1);
        ~Point();
        double x;
        double y;
        friend std::istream& operator>>(std::istream&, Point&);
    };
    Point A;
    Point B;
    Point C;
    Triangle();
    Triangle(Point A_, Point B_, Point C_);
    ~Triangle();
    friend std::istream& operator>>(std::istream&, Triangle&);
};

double distance(Triangle::Point a, Triangle::Point b);
double area(Triangle a);
std::ostream& operator<<(std::ostream&, const Triangle::Point&);
std::ostream& operator<<(std::ostream&, const Triangle&);
bool operator==(Triangle&, Triangle&);
bool operator!=(Triangle&, Triangle&);
bool operator>(Triangle&, Triangle&);
bool operator<(Triangle&, Triangle&);

#endif //LAB3_TRIANGLE_H