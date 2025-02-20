#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
vector<string> colors = {"red", "green", "black", "white", "Pink"};
cout << "Original Vector elements:\n";
for (string &color : colors) {
 cout << color << " ";
    if (!color.empty()) {
     color[0] = toupper(color[0]); 
    }
    }
cout << "\nCapitalize the first character of each vector element:\n";
for (const string &color : colors) {
cout << color << " ";
 }
cout << endl;
return 0;
}
