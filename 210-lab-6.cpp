// COMSC-210 | Lab 6 | Quang Ngo
// IDE used: Visual Studio Code
#include <iostream>
using namespace std;

const int SIZE = 5;

void enterArrayData(double* a) {
    a = new double[SIZE];
    double numInput;
    cout << "Data entry for the array:" << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << "    > Element #" << i << ": ";
        cin >> numInput;
        a[i] = numInput;
    }
    cout << "\nData entry complete." << endl;
}

void outputArrayData(double* a) {
    cout << "Outputting array elements: ";
    for(int i = 0; i < SIZE; i++) {
        cout << a[i] << " ";
    }
}