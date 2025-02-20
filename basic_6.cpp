#include <iostream>
using namespace std;

int main() {
int a, b, sum, count = 0;
cout << "Enter two integers: ";
cin >> a >> b;
sum = a + b;
int temp = sum;
while (temp > 0) {
    count++;
    temp /= 10;
    }
cout << "Sum: " << sum << endl;
cout << "Number of digits in sum: " << count << endl;
return 0;
}
