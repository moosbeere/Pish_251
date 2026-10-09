// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

//пространство имен
using std::cout;
using std::cin;
using std::endl;
using std::string;


void function(std::string name = "olga"); //объ€вление
void function(int numbers = 10); //объ€вление

int sum(int arr[], int length);

void mult2(int &x);

int a = 10;

void test() {
    static int x = 0;
    x++;
    cout << x << std::endl;
}

int main()
{

    
    //функции

    test();
    test();
    test();
    test();
    function(4); //вызов
    int arr[] = { 2,5,8,4 };
    int s = sum(arr, std::size(arr));
    cout << s;
    cout << std::endl;
    int x = 10;
    mult2(x);
    //cout << y; ошибка вызова локальной перменной
    cout << x;
    cout << std::endl;
    cout << a;
}

void function(std::string name) {
    cout << a;
    cout << name << std::endl; //реализаци€
}
void function(int numbers)
{
    cout << numbers << std::endl; //реализаци€
}
int sum(int arr[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}
void mult2(int &x)
{
    int y = 10;
    x = pow(x, 2);
}
    //ссылки
    //int x = 10;
    //int& y = x;
    //y = 15;
    //cout << x;

    //многомерные массивы
    /*int arr[3][2] = { {2,3}, {3,4}, {5,6} };
    for (int i = 0; i < std::size(arr); i++) {
        for (int j = 0; j < std::size(arr[i]); j++) {
            cout << arr[i][j] << " ";
        }
        cout << std::endl;
    }

    for (auto &mas : arr) {
        for (auto elem : mas) {
            cout << elem << " ";
        }
        cout << std::endl;
    }*/


    //массивы
    //int arr[5];
    //arr[0] = 2;
    //arr[1] = 7;
    //arr[2] = 6;

    //for (int i = 0; i < 5; i++) {
    //    cout << arr[i] << " ";
    //}
    //cout << std::endl;

    ////int mas[] = { 4,6,2,8,1,67 };
    ////for (int a : mas) {
    ////    cout << a << " ";
    ////}

    //int mas[] = { 4,6,2,8,1,67 };
    //for (auto a : mas) {
    //    cout << a << " ";
    //}

    //cout << std::endl;
    //int length = std::size(mas);
    //cout << length;
    ////циклы
    //int arr[] = {4, 7, 3, 7};
    //for (auto i : arr) { //foreach
    //    cout << i << " ";
    //}

    //for (int i = 0; i < 5; i++) {
    //    cout << arr[i] << " ";
    //}
    //int i = 0;
    //while (i < 5) {

    //    i++;

    //    if (i == 3)

    //        continue;

    //    if (i == 4)

    //        break;
    //    cout << i;
    //}

    //switch case

    //чтение данных из консоли
   /* setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    std::cout << "¬ведите им€: ";
    string x;
    cin >> x;
    cout << "ѕривет, " << x;*/

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

    /*int x = 6;
    if (x < 10) x = 10;
    else x = 20;

    x = (x < 10) ? 10 : 20;

    cout << x;*/



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


