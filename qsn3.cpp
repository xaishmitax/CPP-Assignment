#include <iostream>
using namespace std;

class Student {
private:
string name;
int rollNumber;
float marks;

public:
void setData(string n, int r, float m) {
    name = n;
    rollNumber = r;
    marks = m;
    }
char getGrade() {
    if (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else return 'C';
 }
 void display() {
    cout << "Name: " << name << ", Roll No: " << rollNumber << ", Grade: " << getGrade() << endl;
    }
};

int main() {
    Student s;
    s.setData("Alice", 1, 85);
    s.display();
    return 0;
}