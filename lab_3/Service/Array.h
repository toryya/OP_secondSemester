//
// Created by ASUS on 24.03.2023.
//

#ifndef LAB3_ARRAY_H
#define LAB3_ARRAY_H
#include <fstream>

class Array
{
private:
    int* array;
    size_t size;
public:
    Array();
    explicit Array(size_t size);
    Array(Array const&);
    ~Array();
    size_t Size() const;
    void push_back(int v);
    void resize(int newSize);
    int& operator[](int i);
    Array operator+(const Array&);
    friend std::istream& operator>>(std::istream&, Array&);
};

std::ostream& operator<<(std::ostream&, Array&);
bool operator==(Array&, Array&);
bool operator!=(Array&, Array&);
bool operator>(Array&, Array&);
bool operator<(Array&, Array&);


#endif //LAB3_ARRAY_H