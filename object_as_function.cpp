#include<iostream>
using namespace std;
//object as function parameter + return
class A{
	int a,b;
	public:
		void getdetails()
		{
			cout<<"Enter a and b :"<<endl;
			cin>> a >> b;
		}
		void printdetails()
		{
			cout<<"a : "<< a << " b : "<< b <<endl;
		}
		A combine(A o1,A o2)
		{
			A o3;
			o3.a = o1.a+o2.a;
			o3.b = o1.b+o2.b;
			return o3;
		}
};

int main(){
	A obj1,obj2;
	obj1.getdetails();
	obj2.getdetails();
	obj1.printdetails();
	obj2.printdetails();

	A obj3 =obj1.combine(obj1, obj2);
	
	obj3.printdetails();
	
	return 0;
}

