#include <iostream>
using namespace std;
/*
- Static variables retain their values throughout program execution, persisting across function calls within the same scope. They're declared with the keyword `static` and are initialized once, typically at the start of program execution. They're useful for maintaining state across function calls and for sharing data among instances of the same class or function. */
class Student
{
private:
    string name;
    int rollNo;
    static int count;

public:
    void setData()
    {
        count++;
        cout << "Student  NO " << count << endl;
        cout << "Enter Your Name: " << endl;
        cin >> name;
        cout << "Enter Your Roll Number:  " << endl;
        cin >> rollNo;
    }
    void getData()
    {
        cout << "\nYour Name: " << name << endl;
        cout << "Your Roll Number:  " << rollNo << endl
             << endl;
    }
    /**
     *-Static methods belong to a class, not to instances, and can be called without creating an object. They're declared with the keyword `static` and are commonly used for utility functions or operations independent of instance variables.*/
    static void getCount()
    {
        cout << "The Count Is: " << count << endl;
    }
};
int Student::count;
int main()
{
    Student Neeraj, Sujal, Pavya;
    Neeraj.setData();
    Student::getCount();
    Neeraj.getData();
    Sujal.setData();
    Student::getCount();
    Sujal.getData();
    Pavya.setData();
    Student::getCount();
    Pavya.getData();
    return 0;
}