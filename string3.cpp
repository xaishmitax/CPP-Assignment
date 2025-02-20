#include <iostream>
#include <sstream>

int main() {
std::string str;
std::cout << "Enter a string: ";
std::getline(std::cin, str);
std::stringstream ss(str);
std::string word, largestWord;
    while (ss >> word) {
        if (word.length() > largestWord.length()) {
            largestWord = word;
        }
    }
std::cout << "Largest word: " << largestWord << std::endl;
 return 0;
}
