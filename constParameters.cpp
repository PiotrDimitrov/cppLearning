#include "topics.h"
#include <iostream>

void fillArray01(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
}

void printArray01(const int arr[], const int size)
//const means that variable cannot be changed inside the function
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";

    }
}

void constParameters()
{
    int size = 10;
    int* arr = new int[size];
    fillArray01(arr, size);
    printArray01(arr, size);
    delete [] arr;
}