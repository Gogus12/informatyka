#include <iostream>
using namespace std;
int main(){
	int pierwszaliczba;
	cout << "Podaj pierwsza liczbe: ";
	cin >> pierwszaliczba;
	
	int drugaliczba;
	cout << "Podaj druga liczbe: " ;
	cin >> drugaliczba;
	
	char znakdzialania; 
	cout << "Podaj znak dzialania ( -, +, /, *): " ;
	cin >> znakdzialania;
	
	int wynik;
	switch(znakdzialania){
		case '-':
			wynik = pierwszaliczba - drugaliczba; 
			cout << "Wynik: " << wynik <<endl;
			break;
		case '+':
			wynik = pierwszaliczba + drugaliczba;
			cout <<  "Wynik: " << wynik <<endl;
			break;
		case '*':
			wynik = pierwszaliczba * drugaliczba;
			cout << "Wynik: " << wynik <<endl;
			break;
		case '/':
			wynik = pierwszaliczba / drugaliczba;
			cout << "Wynik: " << wynik <<endl;
			break;
	}	
	
	
	
	
	
	
	
	
	
}