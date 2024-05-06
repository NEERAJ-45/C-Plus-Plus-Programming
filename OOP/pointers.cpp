#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *b = &a;
    //& - Stores Address
    cout << "The address of a is " << b << endl;
    cout << "The Value At a is " << *b << endl; // Value at Operator
    

    int **c = &b;
    cout << "The address of a is " << &**c << endl;
    cout << "The Value At a is " << **c << endl;

    return 0;
}
