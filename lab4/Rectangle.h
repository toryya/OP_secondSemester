//
// Created by ASUS on 18.03.2023.
//

#include <cstdio>
#include "Interface.h"

class Rectangle : public BaseCObject {
public:
    void initFromDialog() ;
    CVector2D position() const ;
    double mass() const ;
    double square() const;
    double perimeter() const;
    void draw() const;
    const char* classname() const;
    size_t size() const;
private:
    double height, width;
    CVector2D center;
    double _mass;
};


