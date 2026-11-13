// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int sum(int a, int &b) {
    b = b + a;
    return b;
}

int main()
{
    int x = 4;
    int y = 5;
    sum(x, y);
    //y = 9





    int mas_m[2][3] = {
        {3,5,6},
        {5,6,7}
    };

    for (auto& el : mas_m) {
        for (auto i : el) {

        }
    }
    for (int i = 0; i < std::size(mas_m); i++) {
        for (int j = 0; j < std::size(mas_m[0]); j++) {
            std::cout << mas_m[i][j] << " ";
        }
        std::cout << "\n";
    }

    /*int mas[] = { 4,3,2,5,7,8 };
    int length = sizeof(mas) / sizeof(mas[0]);
    int s = std::size(mas);

    for (int i = 0; i < 5; i++) {
        std::cout  << mas[i];
    }
    int i = 0;
    while (i < 6) {
        if (i == 3) continue;
        if (i == 5) break;
        std::cout << mas[i];
        i++;
    }

    do {
        if (i == 3) continue;
        if (i == 5) break;
        std::cout << mas[i];
        i++;
    } while (i < 6);*/

    /*int number;
    std::cout << "Enter number ";
    std::cin >> number;
    number = (number > 5) ? (number + 1) : (number - 1);
    if (number > 5) std::cout << number + 1 << "\n";
    else if (number < 5) std::cout << number - 1 << "\n";
    else std::cout << number << "\n";*/
    char c;
    std::cin >> c;
    switch (c) {
    case '1':
        std::cout << "enter 1\n";
        break;
    case '2':
        std::cout << "enter 2\n";
        break;
    case '3':
        std::cout << "enter 1\n";
        break;
    default:
        std::cout << "default";
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
