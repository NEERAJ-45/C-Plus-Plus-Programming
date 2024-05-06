#include <iostream>
using namespace std;

class Simple;

class Extra
{
public:
    int sum(Simple s1, Simple s2);
};

class Simple
{
private:
    int a, b;
    friend int Extra::sum(Simple s1, Simple s2);

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

int Extra::sum(Simple s1, Simple s2)
{
    int sumi = (s1.a + s2.a) + (s2.b + s1.b);
    return sumi;
}

int main()
{
    Simple s1, s2;
    s1.setData(2, 3);
    s2.setData(4, 5);

    Extra extra;
    int totalSum = extra.sum(s1, s2);
    cout << "Sum: " << totalSum << endl;

    return 0;
}
