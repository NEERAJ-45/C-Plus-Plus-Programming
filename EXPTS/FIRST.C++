#include <iostream>
#include <string>
using namespace std;

typedef struct Student
{
    string ER_class, PRN;
    float marks;

} Stud;

void setClass(Stud *s1, string C)
{
    s1->ER_class = C;
}

void setPRN(Stud *s1, string prn)
{
    s1->PRN = prn;
}

void setMarks(Stud *s1, float Marks)
{
    s1->marks = Marks;
}

string getClass(Stud *s1)
{
    return s1->ER_class;
}

string getPRN(Stud *s1)
{
    return s1->PRN;
}

float getMarks(Stud *s1)
{
    return s1->marks;
}

struct BirthDate
{
    int day;
    int month;
    int year;
};
typedef struct Person
{
    string name, address, Phone;
    struct BirthDate *b1; // Pointer to BirthDate
} Pers;

void setP_Name(Pers *p1, string nm)
{
    p1->name = nm;
}

void setP_Addr(Pers *p1, string adr)
{
    p1->address = adr;
}

void setP_Phone(Pers *P1, string ph_no)
{
    P1->Phone = ph_no;
}

void setBirthDate(Pers *p1, int day, int month, int year)
{
    // Allocate memory for b1
    p1->b1 = new BirthDate;

    p1->b1->day = day;
    p1->b1->month = month;
    p1->b1->year = year;
}

int getBirthDay(Pers *p1)
{
    return p1->b1->day;
}

int getBirthMonth(Pers *p1)
{
    return p1->b1->month;
}

int getBirthYear(Pers *p1)
{
    return p1->b1->year;
}

void getBirthDate(Pers *p1)
{
    cout << "Your BirthDate: " << p1->b1->day << "-" << p1->b1->month << "-" << p1->b1->year << endl;
}

string getName(struct Person P1)
{
    return P1.name;
}

string getAdress(struct Person P1)
{
    return P1.address;
}

string getPhno(struct Person P1)
{
    return P1.Phone;
}

typedef struct Employee
{
    int empid;
    string desg;
    float salary;
} Emp;

void setE_des(Emp *e, string des)
{
    e->desg = des;
}

void setE_Id(Emp *e, int id)
{
    e->empid = id;
}

void setE_Sal(Emp *e, float sal)
{
    e->salary = sal;
}

int getID(Emp e)
{
    return e.empid;
}

string getDesg(Emp e)
{
    return e.desg;
}
float getSal(Emp e)
{
    return e.salary;
}

int main()
{
    string name, address, phno;

    int day, month, year;
    cout << "-----------------------Person---------------------" << endl;
    cout << endl;

    cout << "Enter Name: " << endl;
    cin >> name;

    cout << "Enter Address: " << endl;
    cin >> address;

    cout << "Enter Phone Number: " << endl;
    cin >> phno;
    cout << "Enter Birth Day: " << endl;
    cin >> day;
    cout << "Enter Birth Month: " << endl;
    cin >> month;
    cout << "Enter Birth Year: " << endl;
    cin >> year;

    struct Person P1;
    setP_Name(&P1, name);
    setP_Addr(&P1, address);
    setP_Phone(&P1, phno);
    setBirthDate(&P1, day, month, year);

    cout << "Data of Person:" << endl;
    cout << "Name: " << getName(P1) << endl;
    cout << "Address: " << getAdress(P1) << endl;
    cout << "Phone No: " << getPhno(P1) << endl;

    getBirthDate(&P1);
    cout << endl;
    string Class, PRN;
    float marks;

    cout << "-----------------------Student---------------------" << endl;
    Stud s1;
    cout << endl;

    cout << "Enter Class for Student: " << endl;
    cin.ignore();
    getline(cin, Class);
    cout << "Enter PRN for Student: " << endl;
    getline(cin, PRN);
    cout << "Enter marks for Student: " << endl;
    cin >> marks;

    setClass(&s1, Class);
    setPRN(&s1, PRN);
    setMarks(&s1, marks);

    cout << "Data of Student:" << endl;
    cout << "Class: " << getClass(&s1) << endl;
    cout << "PRN: " << getPRN(&s1) << endl;
    cout << "Marks : " << getMarks(&s1) << endl;
    cout << "-----------------------Employee---------------------" << endl;
    cout << endl;
    string des;
    float sal;
    int eid;
    Emp e1;
    cout << "Enter ID for Employee: " << endl;
    cin >> eid;
    cout << "Enter Designation for Employee: " << endl;
    cin >> des;
    cout << "Enter Salary for Employee: " << endl;
    cin >> sal;

    setE_Id(&e1, eid);
    setE_Sal(&e1, sal);
    setE_des(&e1, des);

    cout << "Data of Employee:" << endl;
    cout << "ID: " << getID(e1) << endl;
    cout << "Designation: " << getDesg(e1) << endl;
    cout << "Salary : " << getSal(e1) << endl;

    return 0;
}
