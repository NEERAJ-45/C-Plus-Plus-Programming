#include <iostream>
using namespace std;

class Simple;
class Extra
{
public:
    int sum(Simple, Simple);
    int sub(Simple, Simple);
};

class Simple
{
private:
    int a, b;
    /*
    friend int Extra::sum(Simple s1, Simple s2);
    friend int Extra::sub(Simple s1, Simple s2);
    # Instead of Making Every method  friend of Your class...
    # Make that Class Friend of Your Class
    */

   friend class  Extra;


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
int Extra::sub(Simple s1, Simple s2)
{
    int sumi = (s1.a - s2.a) - (s2.b - s1.b);
    return sumi;
}

int main()
{
    Simple s1, s2;
    s1.setData(10, 20);
    s2.setData(30, 40);

    Extra e1;

    int res = e1.sum(s1, s2);
    cout << "Addition:"<<res<<endl;
    int res1 = e1.sub(s1, s2);
     cout << "Substraction:"<<res1<<endl;
    return 0;
}