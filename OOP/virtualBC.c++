#include <iostream>
#include <string>
using namespace std;
/*
student ------> Test
student ------> Sports
Sports ------> Result
Test ------> Result
*/
class Student
{
protected:
    string name;
    char bloodGroup;
    int age;

public:
    void setData(string name, char bloodGroup, int age)
    {
        this->name = name;
        this->bloodGroup = bloodGroup;
        this->age = age;
    }

    void getData()
    {
        cout << "Name: " << name << endl;
        cout << "Blood Group: " << bloodGroup << endl;
        cout << "Age: " << age << endl;
    }
};

class Test : virtual public Student
{
protected:
    float acn_Marks, oop_Marks;

public:
    void set_Marks(float ACN, float OOP)
    {
        this->acn_Marks = ACN;
        this->oop_Marks = OOP;
    }

    void get_Marks()
    {
        cout << "ACN Marks: " << acn_Marks << endl;
        cout << "OOP Marks: " << oop_Marks << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_Score(float hs)
    {
        this->score = hs;
    }

    void get_Score()
    {
        cout << "Highest Score: " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = acn_Marks + oop_Marks + score;
        getData();
        get_Marks();
        get_Score();
    }
};

int main()
{

    Result R;
    R.setData("Neeraj", 'A', 21);
    R.set_Score(264);
    R.set_Marks(90, 95);

    R.display();
    return 0;
}
