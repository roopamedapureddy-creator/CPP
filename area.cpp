#include<iostream>
using namespace std;

class Area{
	int l,w,s;
	float r,b,h,a;
	public:
		float circle(float r){
			return 3.14*r*r;
		}
		float triangle(float b,float h){
			return 0.5*b*h;
		}
		int rectangle(int l,int w){
			return l*w;
		}
		float trapezium(float a,float b,float h){
			return 0.5*(a+b)*h;
		}
		int square(int s){
			return s*s;
		}
	
};
int main(){
	Area obj;
	
	cout<<"Area of Circle: "<<obj.circle(7)<<endl;
	cout<<"Area of Triangle: "<<obj.triangle(10,8)<<endl;
	cout<<"Area of Rectangle: "<<obj.rectangle(12,5)<<endl;
	cout<<"Area of Trapezium: "<<obj.trapezium(8,12,5)<<endl;
	cout<<"Area of Square: "<<obj.square(9)<<endl;
	return 0;
}
