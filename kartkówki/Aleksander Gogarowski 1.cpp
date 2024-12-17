 #include <iostream>
 using namespace std;
 int main(){
 	int wiek;
 	cout << "Podaj swoj wiek: ";
 	cin >> wiek;
 	if ((wiek>= 0) && (wiek <=12)) {
 		cout << "Twoja kategoria wiekowa: Dziecko" <<endl;
	 }
	 else if ((wiek>=13) && (wiek <=17)) {
	 	cout << "Twoja kategoria wiekowa: Nastolatek" <<endl;
	 }
 	else if ((wiek>=18) && (wiek <=64)) {
 		cout << "Twoja kategoria wiekowa: Dorosły" <<endl;
 		}
 	else if ((wiek >= 65) && (wiek <=8888888888888)) {
 		cout << "Twoja kategira wiekowa: Senior" <<endl;
	 }
 	

 	



 }