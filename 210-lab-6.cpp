// COMSC-210 | Lab 6 | Quang Ngo
// IDE used: Visual Studio Code
#include <iostream>
using namespace std;

const int SIZE = 5;

void enterArrayData(double* a);
void outputArrayData(double* a);
double sumArray(double* a);

int main() {
    double* fullArray;

    enterArrayData(fullArray);
    outputArrayData(fullArray);
    sumArray(fullArray);
}

void enterArrayData(double* a) {
    a = new double[SIZE];
    double numInput;
    cout << "Data entry for the array:" << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << "    > Element #" << i << ": ";
        while(!(cin >> numInput)){
            cout << "Please enter a double for Element #" << i << ": ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        a[i] = numInput;
    }
    cout << "\nData entry complete." << endl;
}

void outputArrayData(double* a) {
    cout << "Outputting array elements: ";
    for(int i = 0; i < SIZE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

double sumArray(double* a) {
    double sum = 0;
    for(int i = 0; i < SIZE; i++) {
        sum += a[i];
    }
    return sum;
}