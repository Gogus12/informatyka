#include <iostream>
using namespace std;
void GetArrayFromUser(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> arr[i];
    }
}
int FindMaxValue(int arr[], int size) {
    int maxValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}
void DisplayResult(int maxValue) {
    cout << "Najwieksza wartosc to: " << maxValue << endl;
}
int main() {
    const int size = 5;
    int arr[size];
	GetArrayFromUser(arr, size);
    int maxValue = FindMaxValue(arr, size);
    DisplayResult(maxValue);
   
}


