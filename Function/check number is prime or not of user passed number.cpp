//wap to check number is prime or not of user passed number using udf.
#include<iostream>
using namespace std;

bool isprime(int num){
	if(num<2) return false;
	for(int i=2; i*i<=num;i++){
		if(num%i==0){
			return false;
		}
	}
return true;	
}
int main(){
	int number;
	
	cout<<"Enter Number : ";
	cin>>number;
	
	if(isprime(number)){
		cout<<number<<" is a prime number"<<endl;
	}
	else{
		cout<<number<<" is not a prime number"<<endl;
		}
	return 0;
}