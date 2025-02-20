#include <iostream>
using namespace std;
int main(){
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	if ((liczba>= 0) && (liczba <= 49)) {
		cout << "Ocena niedostateczna" << endl;
	}
	else if ((liczba>= 50) && (liczba <= 69)) {
	cout << "Ocena dostateczna" << endl;
	}
	else if ((liczba>= 70) && (liczba <= 84)) {
		cout << "Ocena dobra" << endl;
	}
	else if ((liczba>= 85) && (liczba <=99)) {
		cout << "Ocena bardzo dobra" <<endl;
	}
	else if (liczba == 100){
	cout << "Ocena celujaca" << endl;
	}
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
