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
    friend Number Summ(Number n1, Number n2);
    void printNumber()
    {
        cout << "Your Numbers: " << a << " " << b << endl;
    }
};

Number Summ(Number n1, Number n2)
{
    Number n3;
    n3.a = (n1.a + n2.a);
    n3.b = (n1.b + n2.b);
    
    return n3;
}
 
int main()
{
    Number n1, n2, n3;
    n1.setData(34, 98);
    n1.printNumber();

    n2.setData(4, 8);
    n2.printNumber();

    n3 = Summ(n1, n2);
    n3.printNumber();

     
}
/*
@ Properties of friend functions

- 1. Not in the scope of class
- 2. since it is not in the scope of the class, it cannot be called from the object of that class. n1.Summ() == Invalid
- 3. Can be invoked without the help of any object
- 4. Usually contans the objects as arguments
- 5. Can be declared inside public or private section of the class
- 6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/