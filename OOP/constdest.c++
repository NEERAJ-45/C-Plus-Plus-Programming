#include <iostream>
using namespace std;

class Planet
{
    int a;
public:
    Planet() /*Default Constructor*/
    {

        cout << "Default Constructor is Called!!" << endl;
    }
    Planet(int a, int b) /*Parameterized Constructor*/
    {

        cout << "a + b : " << a + b << endl;
    }
 

        ~Planet()
        {

            cout << "Destructor is Called!!" << endl;
        }
    };

    int main()
    {
        Planet P, P1(20, 10);

        return 0;
    }