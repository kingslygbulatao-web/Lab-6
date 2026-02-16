#include <iostream>

const int SIZE = 5;

void EnterArrayData(double* arr, int size);
void OutputArrayData(const double* arr, int size);
int* Sumarry(const double*arr, int size);

int main() {

    double* myArray = new double[SIZE];
    myArray = nullptr;

    double*myarray = new double[SIZE];
    std::cout << "Data Entry for this array" << std::endl;
   
    std::cout << "> Element #" << ":" << std::endl; 
    EnterArrayData(myArray, Size);
   
    std::cout << "Outputting array elements: " << std::endl;
)   OutputArrayData(myArray, Size);

     std::cout << "Sum of Values: " << total << std::endl;
     double total = sumArray(myArray, SIZE);

     delete[] myArray;

    return 0;
}

void EnterArrayData(double* arr, int size){
    for(int i = 0; i < size; i++){
        std::cin >>  *(arr + i);
    }
}

void OutputeData(const double* arr, int size) {
    for (int i = 0; i < size; i++){
        std::cout
    }
}

