#include <iostream>
#include <cctype>

int main() {
std::string str;
std::cout << "Enter a string: ";
std::cin.ignore(); 
std::getline(std::cin, str);
bool capitalize = true;
for (char &c : str) {
    if (capitalize && std::isalpha(c)) {
        c = std::toupper(c);
        capitalize = false;
        } 
        else if (c == ' ') {
        capitalize = true;
        }
    }
std::cout << "Capitalized string: " << str << std::endl;
return 0;
}
