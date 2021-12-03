#include <iostream>
#include <istream>
#include "Array.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    Array arr(4);

    for (int i = 0; i < 4; i++)
        arr.insert(i + 1);

    cout << "Массив 1: " << arr << endl;

    Array newArr(2);

    for (int i = 0; i < 2; i++)
        newArr.insert(i + 10);

    cout << "Массив 2: " << newArr << endl;

    cout << "=============================================================\n\n";

    arr.insert(newArr, 1);

    cout << "Массив 2 вставленный в массив 1 (после 1 элемента): " << arr << endl;

    return 0;
}