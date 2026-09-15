//Write a C++ program to create a class Student containing student ID, name, and marks. 
//Define all member functions outside the class using the scope resolution operator. 
#include<iostream>
using namespace std;
class student
{
	int id;
	string name;
	int marks;
	public:
		void getdata();
		void display();
};
void student::getdata()
{
	cout<<"Enter ID:";
	cin>>id;
	
	cout<<"Enter Name:";
	cin>>name;
	
	cout<<"Enter Marks:";
	cin>>marks;
}
void student::display()
{
	cout<<"/nStudent Details/n"<<endl;
	cout<<"ID:"<<id<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Marks:"<<marks<<endl;
}
int main()
{
	student s;
	s.getdata();
	s.display();
	return 0;
}
