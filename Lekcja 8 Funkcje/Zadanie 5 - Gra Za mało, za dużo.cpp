#include <iostream>
#include <cstdlib>
#include <ctime>
void DuzaMala(int liczba, int wylosowanaLiczba) {
    if (liczba < wylosowanaLiczba) {
        std::cout << "Za malo\n";
    } else if (liczba > wylosowanaLiczba) {
        std::cout << "Za duzo\n";
    }
}
bool CheckLiczba(int liczba, int wylosowanaLiczba) {
    return liczba == wylosowanaLiczba;
}
int main() {
    srand(time(0));
    int wylosowanaLiczba = rand() % 100 + 1;
    int liczba;
    bool odgadnieta = false;

    while (!odgadnieta) {
        std::cout << "Podaj liczbe z zakresu 1-100: ";
        std::cin >> liczba;
        DuzaMala(liczba, wylosowanaLiczba);
        odgadnieta = CheckLiczba(liczba, wylosowanaLiczba);
    }

    std::cout << "Brawo! Odgadles liczbe " << wylosowanaLiczba << "!\n";
    }



