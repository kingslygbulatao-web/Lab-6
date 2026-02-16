#include <iostream>

const int SIZE = 5;

void EnterArrayData(double* arr, int size);
void OutputArrayData(const double* arr, int size);
double SumArray(const double*arr, int size);

int main() {

    double* myArray = new double[SIZE];
    myArray = nullptr;

    double*myarray = new double[SIZE];
    std::cout << "Data Entry for this array" << std::endl;
   
    std::cout << "> Element #" << ":" << std::endl; 
    EnterArrayData(myArray, SIZE);
   
    std::cout << "Outputting array elements: " << std::endl;

    double total = SumArray(myArray, SIZE);

     std::cout << "Sum of Values: " << total << std::endl;
     
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
        std::cout << *(arr+ i) << " " << std::endl;
    }
}

double SumArray(const double* arr, int size){
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += *(arr + i);
    }

}

