//
// Created by ASUS on 26.05.2023.
//

#include <iostream>
#include <vector>
using namespace std;

template<class T>
class Array
{
public:
    vector<T> arr;
    int count;
    Array(){
        std::cin >> count;
        for (int i = 0; i < count; ++i){
            cin >> arr[i];
//            if(arr[i].type() != char){
//
//            }
        }
    }
    void max()
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

