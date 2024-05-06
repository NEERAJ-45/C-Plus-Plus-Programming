#include <iostream>
using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "This Is Base class";
    }
};
class Derived1 : public Base1
{
};
int main()
{
    Derived1 d1;

    return 0;
}