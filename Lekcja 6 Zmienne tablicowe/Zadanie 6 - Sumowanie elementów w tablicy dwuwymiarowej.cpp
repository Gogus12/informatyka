#include <iostream>
using namespace std;

int main() {
    int macierz[3][3];
    int suma = 0;

    
    cout << "Wprowadź 9 liczb całkowitych do macierzy 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> macierz[i][j];
            suma += macierz[i][j];  
        }
    }

    
    cout << "Suma wszystkich elementów macierzy wynosi: " << suma << endl;

    return 0;
    
}