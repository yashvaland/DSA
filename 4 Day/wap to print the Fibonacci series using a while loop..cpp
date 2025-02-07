//wap to print the Fibonacci series using a while loop.
#include<iostream>
using namespace std;

int main(){
	int n,a=0,b=1,c,i=0;
	
	cout<<"Enter the Number :";
	cin>>n;
	
	cout<<"Fibonacci Series: ";
	
	 while(i<n){
		cout<<a<<" ";
		c=a+b;
		a=b;
		b=c;
		i++;
	 }
	
	return 0;
}