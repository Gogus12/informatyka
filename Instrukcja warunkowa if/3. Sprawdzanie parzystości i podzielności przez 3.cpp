#include <iostream>
using namespace std;
int main(){
	int liczba;
	cout << "Podaj liczbe calkowita: " ;
	cin >> liczba;	
	cout << endl;
	if (liczba % 2 == 0) { 
	cout << "Liczba " <<liczba<< " Liczba jest parzysta" << endl;
	}
	else {	
	cout << "Liczba " << liczba<< " Liczba jest nieparzysta" << endl;
	}
	
	if (liczba % 3 ==0) {
	cout << "Liczba " <<liczba << " Liczba jest podzielna przez 3" <<endl;	
	}
	else {
	cout << "Liczba " <<liczba <<" Liczba nie jest podzielna przez 3" <<endl;
	}
	
	
	
		
	
	
	
	
}