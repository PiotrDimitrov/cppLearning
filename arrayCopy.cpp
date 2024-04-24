#include "topics.h"
#include <iostream>

void printArr02(const int* const arr, const int size, int flag = 1) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << "\t";
    }
    if (flag == 1) {
        std::cout << std::endl;
    }
}

void copyArr02(const int* const arr, int* const newArr, const int size) {
    for (int i = 0; i < size; i++) {
        *(newArr + i) = *(arr + i);
    }
}

void arrayCopy() {
    int size = 10;
    int* arr1 = new int[size];
    int* arr2 = new int[size];

    for (int i = 0; i < size; i++) {
        arr1[i] = i+1;
    }
    for (int i = 0; i < size; i++) {
        arr2[i] = (i+1)*2;
    }
    printArr02(arr1, size);
    printArr02(arr2, size);

    delete[] arr2;

    copyArr02(arr1, arr2, size);

    printArr02(arr1, size);
    printArr02(arr2, size);

    delete[] arr1;
    delete[] arr2;

}
