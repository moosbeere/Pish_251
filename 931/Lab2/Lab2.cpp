// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    //чтение данных из консоли
   /* setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    std::cout << "Введите имя: ";
    string x;
    cin >> x;
    cout << "Привет, " << x;*/

    //условный оператор   
    /*bool b = true;
    if (b) {
        cout << "\n" << true;
    }
    else {

    }
    cout << "Vvedite znak";
    char c;
    int a = 3;
    int v = 3;
   
    cin >> c;
    if (c == '+') {
        int sum = a + v;
    }*/

    int x = 6;
    if (x < 10) x = 10;
    else x = 20;

    x = (x < 10) ? 10 : 20;

    cout << x;

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
