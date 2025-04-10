#include <iostream>
using namespace std;
	int main (){
    
    int tablica[5];
    
    
    cout << "Wprowadz 5 liczb calkowitych:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> tablica[i];
    }

    int najmniejsza = tablica[0];
    
    
    for (int i = 1; i < 5; i++) {
        if (tablica[i] < najmniejsza) {
            najmniejsza = tablica[i];  
        }
    }
    
    cout << "Najmniejsza liczba w tablicy to: " << najmniejsza << endl;

    return 0;

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}