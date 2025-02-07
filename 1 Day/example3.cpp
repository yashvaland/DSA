//wap to swap value of two variable without using third variable

#include<iostream>
using namespace std;

int main(){
	int x=10;
	int y=20;
	
	x=x+y;//x=10+20=30
	y=x-y;//y=30-20=10
	x=x-y;//x=30-10=20
	
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	
	return 0;
	
}