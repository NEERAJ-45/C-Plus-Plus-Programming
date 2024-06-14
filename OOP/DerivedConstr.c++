#include <iostream>
using namespace std;

class Base1
{
private:
    int n1;

public:
    Base1(int n1)
    {
        this->n1 = n1;
        cout << "Base1 Called!! " << endl;
    }

    void printNum1()
    {
        cout << "Base1 Value:  " << this->n1 << endl;
    }
};

class Base2
{
private:
    int n2;

public:
    Base2(int n2)
    {
        this->n2 = n2;
        cout << "Base2 Called!! " << endl;
    }
    void printNum2()
    {
        cout << "Base2 Value:  " << this->n2 << endl;
    }
};

class Derived : public Base1, public Base2
{
private:
    int n3;

public:
    Derived(int num1, int num2, int num3) : Base1(num1), Base2(num2)
    {
        this->n3 = num3;
    }
    void printNum3()
    {
        cout << "Derived Value:  " << this->n3 << endl;
    }
};

int main()
{
    cout << "";

    Derived d1(34, 23, 131);
    d1.printNum1();
    d1.printNum2();
    d1.printNum3();

    return 0;
}