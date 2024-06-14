//! Title: Write a program to implement function for person, student, and employee.
#include <iostream>
using namespace std;

class person
{
private:
    string nm;
    int age;

public:
    int getAge()
    {
        return age;
    }

    string getName()
    {
        return nm;
    }

    void setName(string nm)
    {
        this->nm = nm;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    person()
    {
        nm = "";
        age = 0;
    }

    person(string nm, int age)
    {
        this->nm = nm;
        this->age =age;
    }
};  

int main()
{
  person p1("Neeraj",20);
  cout<<"Name: "<<p1.getName()<<endl;
  cout<<"Age: "<<p1.getAge();
  
  

    return 0;
}