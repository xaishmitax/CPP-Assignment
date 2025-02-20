#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
int n;
cout << "Enter the number of elements: ";
cin >> n;
vector<int> nums(n);
cout << "Enter the numbers: ";
for (int i = 0; i < n; i++) {
    cin >> nums[i];
    }
sort(nums.rbegin(), nums.rend());
cout << "Three highest numbers: ";
for (int i = 0; i < 3 && i < n; i++) {
    cout << nums[i] << " ";
    }
cout << endl;
return 0;
}
