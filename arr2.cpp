#include <iostream>
using namespace std;

void findSecondLargest(int arr[], int n) {
if (n < 2) {
cout << "Array should have at least 2 elements!" << endl;
return;
}
int first = INT_MIN, second = INT_MIN;
 for (int i = 0; i < n; i++) {
if (arr[i] > first) {
    second = first;
    first = arr[i];
    } 
else if (arr[i] > second && arr[i] < first) {
    second = arr[i];
        }
    }
 if (second == INT_MIN) {
    cout << "There is no second largest element!" << endl;
    } else {
 cout << "The second largest element is: " << second << endl;
    }
}
int main() {
int arr[] = {12, 45, 1, -1, 34, 90, 33};
int n = sizeof(arr) / sizeof(arr[0]);
findSecondLargest(arr, n);
return 0;
}
