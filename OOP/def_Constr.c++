#include <iostream>
using namespace std;
class Num
{
private:
    int a, b;

public:
    Num(int a, int b = 8)
    {
        cout << "Addition: " << (a + b) << endl;
    }
};

int main()
{
    Num n(10); 
    return 0;
}