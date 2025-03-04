#include<iostream>
using namespace std;


void incresing(int n,int number=1){
	if(number>n) return;
	cout<<number<<" ";
	incresing(n,number+1);

	
}
int main(){
	int n;
	
	cout<<"Enter Number : ";
	cin>>n;
	
	cout<<"Numbers from 1 to " << n << ": ";
	incresing(n);
	cout<<endl;
	return 0;
}
