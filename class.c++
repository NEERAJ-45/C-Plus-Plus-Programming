#include <iostream>
using namespace std;

class Employee
{
public:
    int a, b, c;

    void setData(int d1, int e1);
    void getData()
    {
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
        cout << "c:" << c << endl;
        cout << "d:" << d << endl;
        cout << "e:" << e << endl;
    }

private:
    int d, e;
};

void Employee::setData(int d1, int e1)
{
    d = d1;
    e = e1;
}

int main()  
{
    Employee emp;
    emp.a = 1;
    emp.b = 2;
    // emp.e  =12;This Member Is private and Cannot be Accessed  Directly..
    emp.c = 3;
    emp.setData(21, 10);
    emp.getData();  

    return 0;
}