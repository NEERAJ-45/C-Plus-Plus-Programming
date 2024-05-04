#include <iostream>
using namespace std;
class Hero
{
    // private:
public:
    string name;
    int age;
};
int main()
{
    Hero hero1;
    hero1.name = "Neeraj";
    hero1.age = 19;
    cout << "Name: " << hero1.name;
    cout << " Age: " << hero1.age;

    return 0;
}