//
// Created by ASUS on 26.05.2023.
//

#include <iostream>
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


