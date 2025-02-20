#include <iostream>
#include <algorithm>
using namespace std;

void findKLargest(int arr[], int n, int k) {
    if (k > n) {
        cout << "k should be less than or equal to the size of the array!" << endl;
        return;
    }

    sort(arr, arr + n, greater<int>()); 

    cout << "The " << k << " largest elements are: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 45, 1, -1, 34, 90, 33};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    findKLargest(arr, n, k);

    return 0;
}
