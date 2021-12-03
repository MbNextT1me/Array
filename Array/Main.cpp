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

    cout << "������ 1: " << arr << endl;

    Array newArr(2);

    for (int i = 0; i < 2; i++)
        newArr.insert(i + 10);

    cout << "������ 2: " << newArr << endl;

    cout << "=============================================================\n\n";

    arr.insert(newArr, 1);

    cout << "������ 2 ����������� � ������ 1 (����� 1 ��������): " << arr << endl;

    return 0;
}