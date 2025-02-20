 #include <iostream>
 using namespace std;
 int main() {
 	int N, suma = 0, i = 1;
 	cout << "Podaj liczbe calkowita dodatnia N: ";
 	cin >> N;
 	if (N <= 0){
 		cout << "Podana liczba nie jest liczba dodatnia!" <<endl;
 		return 1;
	 }
	 while (i <= N) {
	 	suma += i;
	 	i++;
	 }
	 cout << "Suma liczba naturalnych od 1 do " << N << " wynosi: " << suma << endl;
	 return 0;
}