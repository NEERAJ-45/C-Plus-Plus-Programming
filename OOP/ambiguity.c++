#include <iostream>
using namespace std;

class Hero1
{
private:
public:
    void myHero()
    {
        cout << "My Fav Super-Hero is Hitman Rohit Sharma " << endl;
    }
};
class Hero2
{
private:
public:
    void myHero()
    {
        cout << "My Fav Super-Hero is The King Virat Kohli " << endl;
    }
};

class derived : public Hero1, Hero2
{

public:
    void myHero()
    {
        Hero1::myHero();
        Hero2::myHero();
    }
};

int main()
{
    Hero1 h1;
    h1.myHero();
    Hero2 h2;
    h2.myHero();

    derived d1;
    d1.myHero();

    return 0;
}