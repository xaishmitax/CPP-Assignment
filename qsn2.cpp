#include <iostream>
using namespace std;

class Date {
private:
int day, month, year;

public:
void setDate(int d, int m, int y) {
day = d;
month = m;
 year = y;
}
void display() {
cout << "Date: " << day << "/" << month << "/" << year << endl;
 }
};

int main() {
Date d;
d.setDate(20, 2, 2025);
d.display();
return 0;
}
