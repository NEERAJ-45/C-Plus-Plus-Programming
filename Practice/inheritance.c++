#include <iostream>
using namespace std;
// # Single Inheritance
/*
class A
{
public:
    A()
    {

        cout << "Im inside A" << endl;
    }
   ~ A()
    {

        cout << "Im inside A's destructor" << endl;
    }



};

class B : public A
{
public:
    B()
    {
        cout << "Im inside B" << endl;
    }
   ~B()
    {

        cout << "Im inside B's destructor" << endl;
    }
};
*/

// # Multiple
/*
class Base1 
{

public:
    Base1()
    {
        cout << "Inside Base1" << endl;
    }
};

class Base2
{

public:
    Base2()
    {
        cout << "Inside Base2" << endl;
    }
};

class derived : public Base1, public Base2
{

public:
    derived()
    {
        cout << "Inside derived" << endl;
    }
};

*/

// # Multilevel 

class A    //! GrandFather
{
public:
    A()
    {

        cout << "Im inside A" << endl;
    }
   ~ A()
    {

        cout << "Im inside A's destructor" << endl;
    }



};

class B : public A //! Father
{
public:
    B()
    {
        cout << "Im inside B" << endl;
    }
   ~B()
    {

        cout << "Im inside B's destructor" << endl;
    }
};
class C : public B //! Son
{
public:
    C()
    {
        cout << "Im inside C" << endl;
    }
   ~C()
    {

        cout << "Im inside C's destructor" << endl;
    }
};








int main()
{
    // B b1;
    // derived d1;

    // C -> B -> A;


    C c1;


    return 0;
}