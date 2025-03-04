//WAP TO FIND SUM OF 1 TO N USING RECURSION.
#include<iostream>
using namespace std;

int sum(int n){
	if(n==0){
		return 0;
	}
	return n + sum(n-1);
}
int main(){
	int n;
	
	cout<<"Enter Your Number: ";
	cin>>n;
	
	cout<<"sum Of Number From 1 to "<< n <<" is:"<< sum(n)<<endl; 	
	return 0;
}