#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool containsNumber(const string &str) {
for (char c : str) {
if (isdigit(c)) {
return true;
 }
 }
return false;
}

int main() {
vector<string> words = {"red", "green23", "1black", "white"};
vector<string> result;
cout << "Original Vector elements:\n";
 for (const string &word : words) {
    cout << word << " ";
    if (containsNumber(word)) {
    result.push_back(word);
    }
}
cout << "\nFind strings that contain a number(s) from the said vector:\n";
if (result.empty()) {
cout << "None" << endl;
} 
else {
    for (const string &word : result) {
        cout << word << " ";
        }
cout << endl;
 }
}
