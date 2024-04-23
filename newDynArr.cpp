#include "topics.h"
#include <iostream>

void newDynArr()
{
    //1d dyn array
    int size = 10;
    int* arr = new int[size];

    delete [] arr;

    //2d dyn array
    int n = 3; int m = 4;
    int** arr2 = new int* [n];
    for (int i = 0; i < n; i++) {
        arr2[i] = new int[m];
    }
    std::cout << arr2 << " " << arr2[0] << " " << arr2[1] << " " << arr2[2] << std::endl << std::endl;
    // 2d array is an array of pointers to "inside" arrays

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr2[i][j] = rand() % 20;
            std::cout << arr2[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete [] arr2[i];
    }
    delete [] arr2;
}
