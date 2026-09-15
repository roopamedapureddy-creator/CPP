//Write a C++ program to declare a class with member function prototypes inside the class
//and define the member functions outside the class using the scope resolution operator.
#include<iostream>
using namespace std;
class sample
{
	public:
		void display();
		void message();
};
void sample::display()
{
	cout<<"Display Function"<<endl;
}
void sample::message()
{
	cout<<"Message Function"<<endl;
}
int main()
{
	sample s;
	s.display();
	s.message();
	return 0;
}
