#include<iostream>
using namespace std;


int main(){
	int x=20;
	int y=10;
	
	x=x^y;
	y=x^y;
	x=x^y;
	
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	
	
}	