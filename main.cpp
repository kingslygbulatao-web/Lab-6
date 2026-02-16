#include <iostream>

const int SIZE = 5;

void EnterArrayData(double* arr, int size);
void OutputArrayData(const double* arr, int size);
double SumArray(const double*arr, int size);

int main() {


    double*myArray = new double[SIZE];
    
    std::cout << "Data entry for this array" << std::endl; 
    EnterArrayData(myArray, SIZE);

   
    std::cout << "Outputting array elements: ";
    OutputArrayData(myArray, SIZE);

    double total = SumArray(myArray, SIZE);

     std::cout << "Sum of Values: " << total << std::endl;
     
    
    delete [] myArray;
    myArray = nullptr;

    return 0;
}

void EnterArrayData(double* arr, int size){
    for(int i = 0; i < size; i++){
        std::cout << "> Element #" << i << ": ";
        std::cin >>  *(arr + i);
    }
    std::cout << "data entry complete" << std::endl;
}

void OutputArrayData(const double* arr, int size) {
    for (int i = 0; i < size; i++){
        std::cout << *(arr+ i) << " ";
    }
}

double SumArray(const double* arr, int size){
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += *(arr + i);
    }
    return sum;
}