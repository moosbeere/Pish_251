// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{

    //чтение данных из консоли
    //std::string name;
    //std::cout << "Enter your name: ";
    //std::cin >> name;
    //std::cout << "Your name: " << name;

    //условный оператор
    int x;
    std::cout << "Enter number: ";
    std::cin >> x;
    /*”словный оператор
    if (x < 10) {
        x *= 2;
        std::cout << x;
    }
    else {
        x *= 3;
        std::cout << x;
    }
    */

    //“ернарный оператор
    //x *= (x < 10) ? 2 : 3;
    //std::cout << x;
    //switch-case
    //циклы
    //массивы
    /*int massiv[] = { 2,5,67,8 };
    int length = sizeof(massiv) / sizeof(massiv[1]);
    int size = std::size(massiv);
    for (int i = 0; i < size; i++) {
        std::cout << massiv[i] << " ";
    }*/
    int massiv[] = { 2,5,67,8 };
    int i = 1;
    for (int a : massiv) {
        std::cout << massiv[i] << " ";
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
