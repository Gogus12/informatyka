#include <iostream>
using namespace std;

int main() {
    int tablica[3][3];
    int suma = 0;

    cout << "Wprowadz 9 liczb calkowitych:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Liczba [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> tablica[i][j];
            suma += tablica[i][j];  
        }
    }
     double srednia = suma / 9.0;

    cout << "Srednia liczb w tablicy wynosi: " << srednia << endl;

    return 0;
}