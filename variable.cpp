//write a c++ program to define a global variable and a local variable with the same name. 
//Use the scope resolution operator (::) to access the global variable. 
#include<iostream>
using namespace std;
int x=10;
int main()
{
	int x=5;
	cout<<"Local Variable:"<<x<<endl;
	cout<<"Global Variable:"<<::x<<endl;
	return 0;
}
