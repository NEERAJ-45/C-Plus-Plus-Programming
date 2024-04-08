#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "This is a Neeraj's Base Class" << endl;
    }
    void show()
    {
        cout << "Hello World!!" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "This is Derived class" << endl;
    }
};
int main()
{
    Derived d1;
    d1.show();
    return 0;
}