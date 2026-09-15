//Write a C++ program to create a class Rectangle. Define the functions getData() 
//and calculateArea() outside the class using the scope resolution operator. 
#include<iostream>
using namespace std;
class Rectangle
{
	float length;
	float breadth;
	public:
		void getdata();
		void calculateArea();
};
void Rectangle::getdata()
{
	cout<<"Enter Length:";
	cin>>length;
	
	cout<<"Enter Breadth:";
	cin>>breadth;
}
void Rectangle::calculateArea()
{
	float area=length*breadth;
	cout<<"Area is:"<<area<<endl;
}
int main()
{
	Rectangle r;
	r.getdata();
	r.calculateArea();
	return 0;
}
