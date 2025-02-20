#include <iostream>
using namespace std;

int factorial(int n) {
if (n == 0 || n == 1)
return 1;  
return n * factorial(n - 1); 
}
int main() {
int num;
cout << "Enter a number to find its factorial: ";
cin >> num;
if (num < 0)
    cout << "Factorial is not defined for negative numbers." << endl;
    else
    cout << "The factorial of " << num << " is: " << factorial(num) << endl;
return 0;
}
