#include <iostream>
#include <string>
using namespace std;

bool containsAllLetters(const string &str1, const string &str2) {
for (char c : str2) {
    if (str1.find(c) == string::npos) {
    return false; 
    }
    }
return true;
}

int main() {
string str1 = "Python";
string str2 = "Py";
cout << "Original String elements: " << str1 << " " << str2 << endl;
bool result = containsAllLetters(str1, str2);
cout << "Check - First string contains all letters from second string: ";
cout << (result ? "true" : "false") << endl;
return 0;
}
