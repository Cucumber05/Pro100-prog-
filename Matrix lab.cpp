// Matrix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Matrix.h"
#include <iostream>

int main()
{
    Matrix_Class<int> A(2,3);
    std::cin >> A;
    std::cout << A;

    return 0;
    //std::cout << "Hello World!\n";
}

