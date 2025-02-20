#include <iostream>
using namespace std;

int main() {
int start, end, sum = 0;
cout << "Enter two numbers: ";
cin >> start >> end;
 if (start > end) swap(start, end);
  for (int i = start; i <= end; i++) {
    int n = i;
while (n > 0) {
    sum += n % 10;
    n /= 10;
    }
    }
cout << "Sum of digits between " << start << " and " << end << " is: " << sum << endl;
return 0;
}
