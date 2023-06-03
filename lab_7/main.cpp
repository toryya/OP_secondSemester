#include <iostream>
#include <algorithm>
#include "circular_buffer.h"
#include <exception>

void f(int &x) {
    x++;
}

class Exception : public std::exception {
public:
    Exception(std::string error_message) :
            error_message_(error_message) {};

    virtual const char* what() const noexcept override {
        return error_message_.c_str();
    }
private:
    std::string error_message_;
};

int main() {
    circular_buffer<int> buffer(3);

    buffer.push_front(2);
    buffer.push_front(60);
    buffer.push_front(50);

        try {
            for (int &i: buffer) {
                std::cout << i << " ";
            }
            std::cout << "\n";

            std::for_each(buffer.begin(), buffer.end(), f);


            for (int &i: buffer) {
                std::cout << i << " ";
            }
            for (auto &t: buffer) std::cout << t << " ";
            std::cout << "\n";

            circular_buffer<int>::iter it = std::find(buffer.begin(), buffer.end(), 61);
            std::cout << *it << "\n";

            buffer.resize(5);

            buffer.push_back(6);
            buffer.push_back(-5);


            for (int &i: buffer) {
                std::cout << i << " ";
            }

            std::cout << "\n";
            std::sort(buffer.begin(), buffer.end());

            for (int &i: buffer) {
                std::cout << i << " ";
            }
        } catch(std::exception& ex) {
            std::cout << ex.what();
        }

    return 0;
}