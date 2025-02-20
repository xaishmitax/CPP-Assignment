#include <iostream>
using namespace std;

class Employee {
private:
string name;
int id;
double salary;

public:
void setData(string n, int i, double s) {
name = n;
id = i;
salary = s;
 }
void updateSalary(double performanceFactor) {
salary *= performanceFactor;
}
 void display() {
 cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary << endl;
    }
};
int main() {
    Employee e;
    e.setData("John", 101, 5000);
    e.updateSalary(1.1);
    e.display();
    return 0;
}