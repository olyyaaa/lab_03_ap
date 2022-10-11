// Lab03.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Tytysh Olya
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 23

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу
    cout << "x = "; cin >> x;
    A = x * x + ((4*x)/3);
    // спосіб 1: розгалуження в скороченій формі
    if (x < -5)
        B = cos(x)/sin(x);
    if (-5 <= x && x <= 0)
        B = 4 - ((x*x)/2);
    if (x > 0)
        B = log10(x*x) - 4*x/3;
    y = A + B;
    cout << endl;
    cout << "1) y = " << y << endl;
    // спосіб 2: розгалуження в повній формі
    if (x < -5 )
        B = cos(x)/sin(x);
    else if (x > 0)
        B = log10(x * x) - 4 * x / 3;
    else
        B = 4 - ((x * x) / 2);
    y = A + B;
    cout << "2) y = " << y << endl;
    cin.get();
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
