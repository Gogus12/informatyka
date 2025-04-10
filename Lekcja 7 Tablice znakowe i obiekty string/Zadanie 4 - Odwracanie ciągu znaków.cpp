#include <iostream>
using namespace std;
int main() {
    char input[100];
	printf("Podaj ciag znakow: ");
    fgets(input, sizeof(input), stdin); 
	input[strcspn(input, "\n")] = '\0';

    int length = strlen(input);
	char reversed[100];
	for (int i = 0; i < length; i++) {
        reversed[i] = input[length - 1 - i];
    }
    
    reversed[length] = '\0';

    printf("Odwrocony ciag: %s\n", reversed);

}