/*This Cpp Code for Clculator */
#include<iostream>
using namespace std;
class Cal{
	private:
		int x,y;
	public:	
		Cal(){
			x = 0;
			y = 0;
		}
		int add(int,int);
		int sub(int,int);
		int mul(int,int);
		int div(int,int);
};
int Cal::add(int x,int y){
	return x+y;
}

int Cal::sub(int x,int y){
	return x-y;
}
int Cal::mul(int x,int y){
	return x*y;
}
int Cal::div(int x,int y){
	if (y>0)
		return x/y;
	else
		return 0;
}
int main(){
	Cal obj;
	cout<<"add is "<<obj.add(4,6)<<endl;
	cout<<"sub is "<<obj.sub(6,2)<<endl;
	cout<<"mul is "<<obj.mul(5,4)<<endl;
	cout<<"div is "<<obj.div(30,5)<<endl;
return 0;
}
