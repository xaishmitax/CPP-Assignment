#include <iostream>
using namespace std;

int main() {
int num, first, last, digits = 0;
cout << "Input any number: ";
cin >> num;
last = num % 10;
int temp = num;
 while (temp >= 10) {
 temp /= 10;
digits++;
 }
first = temp;
int power = 1;
for (int i = 0; i < digits; i++) power *= 10;
int swapped = last * power + (num % power) - last + first;
cout << "The number after swapping the first and last digits is: " << swapped << endl;
return 0;
}
