#include <iostream>
using namespace std;

class Number
{
private:
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    // Declare Summ as a friend function inside the class
    friend Number Summ(Number n1, Number n2);

    void printNumber()
    {
        cout << "Your Numbers: " << a << " " << b << endl;
    }
};

// Define Summ function outside the class
Number Summ(Number n1, Number n2)
{
    Number n3;
    n3.a = (n1.a + n2.a);
    n3.b = (n1.b + n2.b);

    return n3;
}

int main()
{
    Number n1;
    n1.setData(34, 98);
    n1.printNumber();

    Number n2;
    n2.setData(10, 20);
    n2.printNumber();

    // Adding two numbers
    Number n3 = Summ(n1, n2);
    n3.printNumber();

    return 0;
}
