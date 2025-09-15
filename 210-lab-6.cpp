// COMSC-210 | Lab 6 | Quang Ngo
// IDE used: Visual Studio Code
#include <iostream>
using namespace std;

const int SIZE = 5;

void enterArrayData(double* a);
void outputArrayData(double* a);
double sumArray(double* a);

int main() {
    double* fullArray = new double[SIZE];

    enterArrayData(fullArray);
    outputArrayData(fullArray);
    double sum = sumArray(fullArray);
    cout << "Sum of values: " << sum;

    delete [] fullArray;

    return 0;
}

// enterArrayData() allows user to input doubles into a dynamic array
// arguments: double*
void enterArrayData(double* a) {
    cout << "Data entry for the array:" << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << "    > Element #" << i << ": ";
        while(!(cin >> *(a + i))){
            cout << "Please enter a double for Element #" << i << ": ";
            cin.clear();
            cin.ignore(123, '\n');
        }
    }
    cout << "Data entry complete." << endl;
}

// outputArrayData() outputs doubles of a dynamic array
// arguments: double*
void outputArrayData(double* a) {
    cout << "Outputting array elements: ";
    for(int i = 0; i < SIZE; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
}

// sumArray() calculates sum of all elements in the provided dynamic array
// arguments: double*
// returns: a double totalling the sum
double sumArray(double* a) {
    double sum = 0;
    for(int i = 0; i < SIZE; i++) {
        sum += *(a + i);
    }
    return sum;
}