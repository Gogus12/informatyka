#include <iostream>
using namespace std;
int main(){
	int  N;
	cout << "podaj liczbe N ";
	cin >> N;
	for (int i =1; i <=N; i++){
		if (i % 2 !=0){
			cout <<i<<" ";
		}
	}

}
