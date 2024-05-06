#include <iostream>
using namespace std;

class Zoo
{
private:
    int a;

public:
    Zoo()
    {
        a = 10;
    }

    Zoo(int num)
    {
        a = num;
    }
    Zoo(Zoo &obj)
    {
        cout << "Copy Constructor is Called" << endl;
        a = obj.a;
    }

    void display()
    {

        cout << "The Number for this Object is " << a << endl;
    }
};

int main()
{
    Zoo x, y, z, z1(20), z2;
    x.display();
    z1.display();
    Zoo Obj(z1);
    Obj.display();

    z2 = z1;
    z2.display();
    return 0;
}