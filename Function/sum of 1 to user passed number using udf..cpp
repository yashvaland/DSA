//wap to find sum of 1 to user passed number using udf.

#include<iostream>
using namespace std;

int sum(int num){
	int sum=0;
	
	for(int i=1; i<=num;i++){
		sum+=i;
	}
	return sum;
}
int main(){
	int number;
	
	cout<<"Enter Number :";
	cin>>number;
	
	cout<<"Answer : "<<sum(number)<<endl;
	return 0;
}