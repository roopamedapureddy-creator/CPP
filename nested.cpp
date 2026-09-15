//
#include<iostream>
using namespace std;

class uni{
	char str[20];
	string a;
	
	public:
		uni(string x){
			a =' x';
		}
		void display()
		{
			cout<<" In University class display fun.......a="<<a<<endl;
		}
		class scl_of_eng{
				char str[20];
			string b;
			public:
				scl_of_eng(string x){
					b = 'x';
				}
				void display(){
					cout<<" In scl of engineering class display fun......b="<<b<<endl;
				}
				class branch{
						char str[20];
					string c;
					public:
						branch(string x){
							c = 'x';
						}
						void display(){
							cout<<" In last class display fun.......c="<<c<<endl;
						}

				};
		};
};
int main(){
	
	uni o1;
	o1.display(AUS);
	uni::scl_of_eng o2;
	o2.display(BTECH);
	uni::scl_of_eng::branch o3;
	o3.display(CSE);
	
	return 0;
	
}
