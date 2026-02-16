#include <iostream>
#include <ctime>

const int SIZE = 5;

int* EnterArrayData();
int* OutputArrayData();
int* Sumarry();

int main() {
    srand(time(0));

    std::cout << "Data entry for this array: " << std::endl;
    int *iptr = nullptr;
    iptr = new int[SIZE];

    int total = EnterArrayData();
    
    for (int i = 0; i < SIZE; i++) // output array using pointers
        std::cout << *(iptr + i) << " ";
    std::cout << std::endl;
    delete [] iptr;

    std::cout << "\nRETURNING POINTERS FROM FUNCTIONS\n\n";
    int *myRands = nullptr;
    myRands = getRandomArray();     // function returns a pointer to an array of randoms
    for (int i = 0; i < SIZE; i++)  // output using array nomenclature
        std::cout << myRands[i] << " ";
    delete [] myRands;

    return 0;
}

int* EnterArrayData() {
    int *arr = nullptr;
    arr = new int[SIZE];
    for (int i = 0; i < SIZE; i++)
        arr[i] = rand() % (MAX-MIN+1) + MIN;
    return arr;
}

