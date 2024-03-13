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
    Matrix_Class<int> A(m, n);
    std::cout << "So now what do u want to do? ^-^\n1.Create first Matrix by youself\n2.Create first Matrix by random\nPlease choose one <3: ";
    std::cin >> choose;

    if (choose == 1) {
        std::cout << "Start enter values:" << std::endl;
        std::cin >> A;
    }
    else{
        A.random();
    }

    std::cout << "please enter rows and cols: " << std::endl;
    std::cout << "rows: ";
    std::cin >> m;
    std::cout << "cols: ";
    std::cin >> n;
    Matrix_Class<int> B(m, n);
    std::cout << "So now what do u want to do? ^-^\n1.Create second Matrix by youself\n2.Create second Matrix by random\nPlease choose one <3: ";
    std::cin >> choose;

    if (choose == 1) {

        std::cout << "Start enter values:" << std::endl;
        std::cin >> B;
    }
    else {
        B.random();
    }

    std::cout << "And now we gonna try smth!" << std::endl;
    std::cout << "do u wanna some? (yes/no)" << std::endl;
    std::string contin;
    int item;
    std::cin >> contin;
    std::cout << "1.A + B \n2.A += B\n3.A - B\n4.A -= B\n5.A * B\n6.A == B\n7.A != B\n8.all! \n9.I wanna see my litlle cuties(show matrixes)" << std::endl;
    while (contin != "no") {
       
        std::cout << "<3 enter wich one(1-8):" << std::endl;
        std::cin >> item;
        switch (item) {
        case 1:
            std::cout << "1.A + B" << std::endl;
            std::cout << (A + B) << std::endl;
            break;
        case 2:
            std::cout << "2.A += B:" << std::endl;
            std::cout << (A += B) << std::endl;
            break;
        case 3:
            std::cout << "3.A - B:" << std::endl;
            std::cout << (A - B) << std::endl;
            break;
        case 4:
            std::cout << "4.A -= B:" << std::endl;
            std::cout << (A -= B) << std::endl;
            break;
        case 5:
            std::cout << "5.A * B:" << std::endl;
            std::cout << (A * B) << std::endl;
            break;
        case 6:
            std::cout << "6.A == B:" << std::endl;
            std::cout << (A == B) << std::endl;
            break;
        case 7:
            std::cout << "7.A != B:" << std::endl;
            std::cout << (A != B) << std::endl;
            break;
        case 8:
            std::cout << "1.A + B" << std::endl;
            std::cout << (A + B) << std::endl;
            std::cout << "2.A += B:" << std::endl;
            std::cout << (A += B) << std::endl;
            std::cout << "3.A - B:" << std::endl;
            std::cout << (A - B) << std::endl;
            std::cout << "4.A -= B:" << std::endl;
            std::cout << (A -= B) << std::endl;
            std::cout << "5.A * B:" << std::endl;
            std::cout << (A * B) << std::endl;
            std::cout << "6.A == B:" << std::endl;
            std::cout << (A == B) << std::endl;
            std::cout << "7.A != B:" << std::endl;
            std::cout << (A != B) << std::endl;
            break;
        case 9:
            std::cout << "Yours first litlle cute matrix:" << std::endl;
            std::cout << A;

            std::cout << "\nYours second litlle cute matrix:" << std::endl;
            std::cout << B;
            break;
        default:
            std::cout << "Please try another one :(" << std::endl;
            break;
        }
        std::cout << "do u wanna try another one? (yes/no)" << std::endl;
        std::cin >> contin;

    }

    return 0;

}

