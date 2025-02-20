#include <iostream>
using namespace std;
int main(){
	int tablica[5];
	int suma;
	cout << "Podaj 5 liczb calkowitych:\n";
	for (int i = 0; i < 5; i++) {
		cout << "Podaj liczbe nr " << i + 1 << ": ";
		cin >> tablica[i];
	}
	for (int i = 0; i < 5; i++) {
	suma += tablica[i];
}
double srednia = suma /5;
cout << "Srednia liczb: " << srednia <<endl;

	
	
	
	
	
	
	
	
	
return 0;	
} 