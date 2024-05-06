#include <iostream>
using namespace std;
class Simple
{
private:
    int num1, num2;

public:
    Simple(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
        cout << "Parameterized Constructor is called" << endl;
    }

    Simple()
    {
        num1 = num2 = 0;
        cout << "Default Constructor is called" << endl;
    }

    Simple(Simple &obj)
    {
        cout << "Copy Constructor is called" << endl;
        


    }



};
int main()
{
    cout << "";

    return 0;
}