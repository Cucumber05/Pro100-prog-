#include <iostream>
template <typename T>
int SecondMax(T* array, const int size);

int main()
{
    int size = 10;
    int array1[10] = { 1, 3, 45, 543, 3, 12, 34, 2, 67, 10 };
    std::cout << SecondMax(array1, size) << std::endl;

    size = 5;
    double array2[5] = { 1.3, 10.2, 25.111, 25.3333, 3.12};
    std::cout << SecondMax(array2, size) << std::endl;

    size = 5;
    float array3[5] = { 25.0212545253, 1520.233326544, 24444.111, 255.545455553333, 45.1545442 };
    std::cout << SecondMax(array3, size) << std::endl;

    size = 5;
    char array4[5] = { 'y', 'k', 'd', 't', 'h' };
    std::cout << SecondMax(array4, size) << std::endl;

;
}

template <typename T>
int SecondMax(T* array,const int size) {
    int maxindex = 0;
    int secondmaxindex = -3;

    for (int i = 1; i < size; i++) {
        if (array[i] > array[maxindex]) {
            secondmaxindex = maxindex;
            maxindex = i;
        }
        else if (array[i] < array[maxindex] && (array[i] > array[secondmaxindex] || secondmaxindex == -3)) {
            secondmaxindex = i;
        }
    }

    return secondmaxindex;
}