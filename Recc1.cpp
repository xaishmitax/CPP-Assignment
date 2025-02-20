#include <iostream>
using namespace std;

int arraySum(int arr[], int size) {
if (size == 0) 
return 0; 
return arr[size - 1] + arraySum(arr, size - 1); 
}

int main() {
int n;
cout << "Enter the number of elements in the array: ";
cin >> n;
int arr[n];
cout << "Enter " << n << " elements: ";
 for (int i = 0; i < n; i++) {
    cin >> arr[i];
    }

int sum = arraySum(arr, n);
cout << "The sum of all elements in the array is: " << sum << endl;
return 0;
}
