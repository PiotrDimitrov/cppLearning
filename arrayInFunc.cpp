#include "topics.h"
#include <iostream>
#include <vector>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void print_vector(std::vector<int> vec){
    for (int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void func1(int arr[]){
    arr[0] = 10;
}

void func2(std::vector<int> vec){ //value of vec in parameter
    vec[0] = 10;
}

void func3(std::vector<int> &vec){ //reference of vec in parameter
    vec[0] = 10;
}

void arrayInFunc() {
    int arr[] = {1, 2, 3, 4, 5};
    print_array(arr, 5); //1 2 3 4 5
    func1(arr);
    print_array(arr, 5);//10 2 3 4 5 (arrays element can be accesed by func1 without adress)
    std::vector<int> vec = {1, 2, 3, 4, 5};
    print_vector(vec); //1 2 3 4 5
    func2(vec);
    print_vector(vec); //1 2 3 4 5
    func3(vec);
    print_vector(vec); //10 2 3 4 5
}