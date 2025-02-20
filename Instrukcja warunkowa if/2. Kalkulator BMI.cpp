#include <iostream>
using namespace std;
int main (){
float waga;
float wzrost;
cout << "Podaj wzrost: " <<endl;
cin >> wzrost;
cout << "Podaj wage: " <<endl;
cin >> waga;
int BMI;
BMI = waga / (wzrost*wzrost);
if (BMI<=18.5) {
	cout << "Niedowaga" << endl;
}
else if ((BMI>=18.5) && (BMI <=24.5)) {
	cout << "W normie" << endl;
}
else if ((BMI>=25) && (BMI<=29.9)) {
	cout << "Nadwaga" << endl;
	
}
else if ((BMI == 30)) {
	cout << "Otylosc" << endl;
}
	
}