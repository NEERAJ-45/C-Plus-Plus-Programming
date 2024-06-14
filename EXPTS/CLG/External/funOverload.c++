#include <iostream>
using namespace std;
class F_Over
{
private:
    int a, b, c;

public:
    void Square(int a)
    {
        cout << a * a << endl;
    }
    void Square(int a, int b)
    {
        cout << (a * a) + (b * b) << endl;
    }
    void Square(int a, int b, int c)
    {
        cout << (a * a) + (b * b) + (c * c) << endl;
    }
};
int main()
{
    F_Over F1;
    F1.Square(12);
    F1.Square(12, 25);
    F1.Square(12,10,23);
    
    return 0;
}