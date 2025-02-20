#include <iostream>
using namespace std;
bool isLeapYear(int year) {
return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main() {
int year, month;
cout << "Input Year: ";
cin >> year;
cout << "Input Month: ";
cin >> month;
int daysInMonth;
 if (month == 2) {
 daysInMonth = isLeapYear(year) ? 29 : 28;
} 
else if (month == 4 || month == 6 || month == 9 || month == 11) {
 daysInMonth = 30;
} 
else {
daysInMonth = 31;
 }
cout << "Number of days of the year " << year << " and month " << month << " is: " << daysInMonth << endl;
return 0;
}
