// selectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> mas, int x) {
    int min_index = x;
    int size = mas.size();
    for (int i = x; i < size; i++) {
        if (mas[i] < mas[min_index]) min_index = i;
    }
    return min_index;
}

vector<int> selectionSort(vector<int> sort) {
    int size = sort.size();
    for (int i = 0; i < size; ++i) {
        int min_index = findMin(sort, i);   
        int temp = sort[i];
        sort[i] = sort[min_index];
        sort[min_index] = temp;
    }
    return sort;
}

int main()
{
    vector<int> arr = {4, 87, 2, 8, 65, 3, 98, 1};
    for (auto a : selectionSort(arr))
        cout << a << ",";
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
