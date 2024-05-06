#include <iostream>
using namespace std;
class Simple
{
private:
    int num1, num2;

public:
    Simple()
    {
        num1 = num2 = 0;
        cout << "Default Constructor is called" << endl;
    }

    Simple(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
        cout << "Parameterized Constructor is called" << endl;
    }

    Simple(Simple &obj)
    {
        cout << "Copy Constructor is called" << endl;
        this->num1 = obj.num1;
        this->num2 = obj.num2;
    }

    void show()
    {
        cout << "Values are: " << num1 << " & " << num2 << endl;
    }
};
int main()
{
    Simple S1;
    S1.show();
    Simple S2(33, 45);
    S2.show();
    Simple S3(23,45);
    S3.show();


    return 0;
}