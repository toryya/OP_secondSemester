//
// Created by ASUS on 18.03.2023.
//

#include <cstdio>
#include "Interface.h"

class Trapezoid : public BaseCObject {
public:
    void initFromDialog() ;
    CVector2D position() const;
    double mass() const ;
    double square() const ;
    double perimeter() const ;
    void draw() const ;
    const char* classname() const ;
    size_t size() const ;
private:
    double edge1, edge2, base1, base2, h;
    CVector2D center;
    double _mass;
};
