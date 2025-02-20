#include <iostream>
using namespace std;

class Triangle
{
private:
    int a, b, c;

public:
void setSides(int x, int y, int z)
 {
    a = x;
    b = y;
    c = z;
}
  void checkType()
    {
    if (a == b && b == c)
    cout << "Equilateral Triangle" << endl;
    else if (a == b || b == c || a == c)
    cout << "Isosceles Triangle" << endl;
    else
    cout << "Scalene Triangle" << endl;
    }
};

int main()
{
    Triangle t;
    t.setSides(3, 3, 3);
    t.checkType();
    return 0;
}
