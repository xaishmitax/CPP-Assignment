#include <iostream>
using namespace std;

void findLargestThree(int arr[], int n) {
if (n < 3) {
    cout << "Array should have at least 3 elements!" << endl;
    return;
}
int first = INT_MIN, second = INT_MIN, third = INT_MIN;
for (int i = 0; i < n; i++) {
if (arr[i] > first) {
    third = second;
    second = first;
    first = arr[i];
 } 
 else if (arr[i] > second) {
    third = second;
    second = arr[i];
    }
     else if (arr[i] > third) {
        third = arr[i];
        }
    }
cout << "The largest three elements are: " << first << ", " << second << ", " << third << endl;
}
int main() {
int arr[] = {12, 45, 1, -1, 34, 90, 33};
int n = sizeof(arr) / sizeof(arr[0]);
findLargestThree(arr, n);
return 0;
}

