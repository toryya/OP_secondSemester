#include <iostream>
#include "Menu.h"
#include "Service/Rectangle.h"
#include "Service/Trapezoid.h"
#include <vector>

using namespace std;


int main()
{
    vector <BaseCObject*> array;
    char command = 0;
    double sq = 0;
    double perimeter = 0;
    double mass = 0;
    double memory = 0;

    while (command != '8')
    {
        cout << "Select the command\n"
                "1: add a rectangle\n"
                "2: add a trapezoid\n"
                "3: draw\n"
                "4: area\n"
                "5: perimeter\n"
                "6: memory\n"
                "7: mass\n"
                "8: sort\n"
                "9: exit"<< endl;
        cin >> command;



        if (command == '1')
        {
            Rectangle rectangle;
            rectangle.initFromDialog();
            array.push_back(&rectangle);

        }

        if (command == '2')
        {
            Trapezoid trapezoid;
            trapezoid.initFromDialog();
            array.push_back(&trapezoid);

        }

        if (command == '3')
        {
            for (int i = 0; i < array.size(); ++i)
            {
                array[i]->draw();
            }
        }

        if (command == '4')
        {
            for (int i = 0; i < array.size(); ++i)
            {
                sq += array[i]->square();
            }
            cout << "sumArea: " << sq << endl;
        }
        if (command == '5')
        {
            for (int i = 0; i < array.size(); ++i)
            {
                perimeter += array[i]->perimeter();
            }
            cout << "sumPerimeter: " << perimeter << endl;
        }
        if (command == '6')
        {
            for (int i = 0; i < array.size(); ++i)
            {
                memory += array[i]->size();
            }
            cout << "Memory: " << memory << endl;
        }
        if (command == 7)
        {
            for (int i = 0; i < array.size(); ++i)
            {
                mass += array[i]->mass();
            }
            cout << "sumMassCenter: " << mass << endl;
        }
        if (command == '8')
        {
            for (int i = 0; i < array.size() - 1; ++i)
            {
                if (array[i + 1]->mass() < array[i]->mass())
                    swap(array[i + 1], array[i]);
            }
        }
    }
}