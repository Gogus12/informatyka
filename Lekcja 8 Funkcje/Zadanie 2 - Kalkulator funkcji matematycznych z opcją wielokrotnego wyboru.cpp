#include <iostream>
using namespace std;

int main() {
    int wybor;
    double num1, num2;

    do {
        cout << "Wybierz funkcje matematyczna:" << endl;
        cout << "1 - Suma" << endl;
        cout << "2 - Roznica" << endl;
        cout << "3 - Iloczyn" << endl;
        cout << "4 - Iloraz" << endl;
        cout << "0 - Zakoncz" << endl;
        cout << "Twoj wybor: ";
        cin >> wybor;

        if (wybor == 0) {
            cout << "Koniec programu." << endl;
            break;
        }

        cout << "Podaj pierwsza liczbe: ";
        cin >> num1;
        cout << "Podaj druga liczbe: ";
        cin >> num2;

        switch (wybor) {
            case 1:
                cout << "Suma: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Roznica: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Iloczyn: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Iloraz: " << num1 / num2 << endl;
                } else {
                    cout << "Blad! Nie mozna dzielic przez 0." << endl;
                }
                break;
            default:
                cout << "Nieprawidlowy wybor. Sprobuj ponownie." << endl;
        }

    } while (true); 

    return 0;
}