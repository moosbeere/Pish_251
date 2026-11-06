// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;

int main()
{
    setlocale(LC_ALL, "RUS");
    //побитовые операции
    int a = 2; //010
    int b = 2; //010
    a = a >> 1;
    cout << a << "\n";
    if (a ^ b)

    //арифметические операции
    int s = 2;
    cout << "s = " << s-- << "\n";
    cout << "s = " << s << "\n";


    //переменные и их типы
    int x = 4;
    long int e = 878787;
    const double d = 9.7;
    //d = 7.5; ошибка изменения константы
    float f = 5.7f;
    bool b = true;
    cout << b << "\n";



    //простейшая программа
    std::cout << "\\\\" << std::endl;
    std::cout << "Привет!\n";
    char str = 'd';
    int mas[5] = { 4,5,6,2,7 };
    //for i in mas //foreach
    //for i in range(len(mas)):
        //print(mas[i])
    int len = std::size(mas);
    for (auto i : mas) {
        std::cout << i;
    }
    for (int i = 0; i < std::size(mas); i++) {
        std::cout << mas[i];
    }
    std::cout << *mas << std::endl;
    for (int* i = mas; i < std::end(mas); i++) {
        std::cout << *i << " ";
    }


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
