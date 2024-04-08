#include<iostream>
#include<string.h>
using namespace std;
	struct BirthDate {
	int day;
	int month;
	int year;
	
	};
 
typedef struct Person
 {
	string name , address,Phone;
	struct BirthDate b1;
 }Pers;
 
 void setP_Name(Pers * p1,string nm)
 {
 	p1->name  = nm;
 }
 
 void setP_Addr(Pers * p1,string adr)
 {
 
 	p1->address = adr;
  
 }
 
 void setP_Phone(Pers * P1,string ph_no)
 {
 	P1->Phone = ph_no;
  
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
 
 
 
 
 
 int main()
 {
 string name,address,phno;
 cout<<"Enter Name: "<<endl;
 cin>>name;
 
 cout<<"Enter Address: "<<endl;
 cin>>address;
 
 cout<<"Enter Phone Number: "<<endl;
 cin>>phno;
 
 struct Person P1;
 setP_Name(&P1,name);
 setP_Addr(&P1,address);
 setP_Phone(&P1,phno);
 
 cout<<"Data:"<<endl;
 cout<<"\tName: "<<getName(P1)<<endl;
 cout<<"\tAddress: "<<getAdress(P1)<<endl;  
 cout<<"\tPhone No: "<<getPhno(P1)<<endl; 
 
 
 
 
 }
 
 
 
 
