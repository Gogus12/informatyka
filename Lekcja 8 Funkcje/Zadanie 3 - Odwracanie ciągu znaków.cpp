#include <iostream>
#include <string>
#include <algorithm>
std::string GetTextFromUser() {
    std::string text;
    std::getline(std::cin, text);
    return text;
}
std::string ReverseString(const std::string& text) {
    std::string reversed = text;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}
void DisplayResult(const std::string& reversedText) {
    std::cout << "Odwrocony ciag znakow: " << reversedText << std::endl;
}
int main() {
    std::string userText = GetTextFromUser();
    std::string reversedText = ReverseString(userText);
    DisplayResult(reversedText);
    return 0;
}



