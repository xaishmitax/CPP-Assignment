#include <iostream>
using namespace std;

int main() {
int n;
cout << "Input number of terms to display: ";
cin >> n;

int a = 0, b = 1, next;
cout << "Here is the Fibonacci series up to " << n << " terms:\n";
for (int i = 1; i <= n; i++) {
    cout << a << " ";
    next = a + b;
    a = b;
    b = next;
    }
cout << endl;
return 0;
}
