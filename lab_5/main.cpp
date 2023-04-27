#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <string>

using namespace std;

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


class Array
{
public:
    template<class T>
    void max(vector<T> arr)
    {
        T max=0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout << max;
    }
};


int main()
{
    cout << "Select the data type" << endl;
    cout << "1 int"<< endl;
    cout << "2 char" << endl;
    cout << "3 double" << endl;
    int i, count;
    cin >> i;
    cout << "enter the size of the array"<< endl;
    cin >> count;
    cout << "Enter the numbers"<< endl;

    unsigned int type;
    try
    {
        if (i <= 0 || i > 3)
        {
            throw ("error: out of range\n");
        }
    }

    catch (const char* message)
    {
        cout << message;
    }

    Array arr;
    if (i == 1)
    {
        vector<int> arr_(count);

        for (int i = 0; i < count; ++i)
        {
            cin >> arr_[i];
        }
        arr.max(arr_);

    }
    else if (i == 2)
    {
        vector<char> arr_(count);
        for (int i = 0; i < count; ++i)
        {
            cin >> arr_[i];
        }
        arr.max(arr_);
    }
    else if (i == 3)
    {
        vector<double> arr_(count);
        for (int i = 0; i < count; ++i)
        {
            cin >> arr_[i];
        }
        arr.max(arr_);
    }
}