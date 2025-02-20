#include <iostream>
using namespace std;
bool isPrime(int n) {
if (n <= 1) return false;
for (int i = 2; i <= n / 2; i++) {
if (n % i == 0) return false;
}
return true;
}

int main() {
int num;
cout << "Input a number to find the last prime number before it: ";
cin >> num;
int lastPrime = -1;
for (int i = num - 1; i >= 2; i--) {
if (isPrime(i)) {
lastPrime = i;
break;
}
}
 if (lastPrime != -1) {
    cout << lastPrime << " is the last prime number before " << num << endl;
} else {
    cout << "No prime number found before " << num << endl;
    }
return 0;
}
