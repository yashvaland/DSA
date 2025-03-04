//WAP TO FIND FACTORIAL OF N USING RECURSION.

#include<iostream>
using namespace std;
int factorial(int n){
	if(n==0){
		return 1;
	}
	return n*factorial(n-1);
}
int main(){
	int n;
	
	cout<<"Enter Your Number: ";
	cin>>n;
	
	cout<<"Factorial Of "<< n <<" is:"<< factorial(n)<<endl; 	
	return 0;
}