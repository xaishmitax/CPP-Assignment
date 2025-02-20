#include <iostream>
using namespace std;

int main() {
int n;
cout << "Input number of terms: ";
cin >> n;

int term = 0, sum = 0;
cout << "The series is: ";
for (int i = 1; i <= n; i++) {
    term = term * 10 + 1;  // Create the next term by adding 1 at the end
    sum += term;
    cout << term;
 if (i < n) cout << " + ";
}
cout << "\nThe sum of the series is: " << sum << endl;
 return 0;
}
