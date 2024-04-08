#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name, address;
	int age = -1;

public:
	int setName(string nm)
	{
		if (nm.length() == 0)
		{
			cout << "Name Cannot be empty!" << endl;
		}
		else
		{
			name = nm;
		}
		return 0;
	}

	int setAddress(string Addr)
	{
		if (Addr.length() == 0)
		{
			cout << "Address Cannot be empty!" << endl;
		}
		else
		{
			address = Addr;
		}
		return 0;
	}

	int setAge(int agee)
	{
		if (agee > 0 && agee <= 120)
		{
			age = agee;
		}
		else
		{
			cout << "Invalid Age!" << endl;
		}
		return 0;
	}

	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
};

class Student
{
private:
	string Class, PRN;
	float Marks;

public:
	int setClass(string Cl)
	{
		if (Cl.length() == 0)
		{
			cout << "Class Cannot be Empty!!" << endl;
		}
		else
		{
			Class = Cl;
		}
		return 0;
	}
	int setPRN(string prn)
	{
		if (prn.length() == 0)
		{
			cout << "PRN Cannot be Empty!!" << endl;
		}
		else
		{
			PRN = prn;
		}
		return 0;
	}

	int setMarks(float marks)
	{
		if (marks < 0 || marks > 100)
		{
			cout << "Marks are Invalid!!" << endl;
		}
		else
		{
			Marks = marks;
		}
		return 0;
	}
	string getClass()
	{
		return Class;
	}
	string getPRN()
	{
		return PRN;
	}
	float getMarks()
	{
		return Marks;
	}
};

int main()
{
	Person p1;
	p1.setName("Neeraj");

	cout << "Name:  " << p1.getName() << endl;
	p1.setAge(21);

	cout << "Age:" << p1.getAge() << endl;

	Student S1;
	S1.setClass("SY CSE B");
	S1.setMarks(8.7);
	S1.setPRN("23UCS320");

	cout << "Class: " << S1.getClass() << endl;
	cout << "Marks: " << S1.getMarks() << endl;
	cout << "PRN: " << S1.getPRN() << endl;
	return 0;
}
