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

void outputArrayData(double* a) {
    cout << "Outputting array elements: ";
    for(int i = 0; i < SIZE; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
}

double sumArray(double* a) {
    double sum = 0;
    for(int i = 0; i < SIZE; i++) {
        sum += *(a + i);
    }
    return sum;
}