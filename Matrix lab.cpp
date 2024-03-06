// Matrix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Matrix.h"
#include <iostream>

int main()
{
    int choose, m, n;
    std::cout << "Hello World!\nFirst of all please enter rows and cols: " << std::endl;
    std::cout << "rows: ";
    std::cin >> m;    
    std::cout << "cols: ";
    std::cin >> n;
    std::cout << "So now what do u want to do? ^-^\n 1.Create first Matrix by youself\n2.Create first Matrix by random\nPlease choose one <3: ";
    std::cin >> choose;

    if (choose == 1) {
        Matrix_Class<int> A(m, n);
        std::cout << "Start enter values:" << std::endl;
        std::cin >> A;
    }
    else{
        Matrix_Class<int> A(m, n);
        A.random();
    }

    std::cout << "So now what do u want to do? ^-^\n 1.Create second Matrix by youself\n2.Create second Matrix by random\nPlease choose one <3: ";
    std::cin >> choose;

    if (choose == 1) {
        Matrix_Class<int> B(m, n);
        std::cout << "Start enter values:" << std::endl;
        std::cin >> B;
    }
    else {
        Matrix_Class<int> B(m, n);
        B.random();
    }

 


    return 0;
    //std::cout << "Hello World!\n";
}

