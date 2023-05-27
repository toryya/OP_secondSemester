#include <iostream>
#include <algorithm>
#include "Array.h"
#include "Exception.h"


using namespace std;


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
    if (i == 1)
    {
        Array<int>* arr = new Array<int>;
    }
    else if (i == 2)
    {
        Array<char>* arr = new Array<char>;
    }
    else if (i == 3)
    {
        Array<double>* arr = new Array<double>;
    }




}