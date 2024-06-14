#include <iostream>
using namespace std;

class Simple
{
private:
    int a;

public:
    Simple(int n)
    {
        this->a = n;
    }
    friend Simple square(Simple &s1);
    void show()
    {
        cout << "Value: " << a;
    }
};

Simple square(Simple &s1)
{
    cout << (s1.a * s1.a);
}

int main()
{
    system("cls");
    Simple s1(10);
    square(s1);
    return 0;
}