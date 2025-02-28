// wap print all tables from 1 to user passed number using udf.
#include<iostream>
using namespace std;

void table(int num){
	
	for(int i=1;i<=10;i++){
		for(int j=1;j<=num;j++){
		cout<< j <<" * "<< i <<" = "<< j*i<<"\t";	
		}
	cout<<endl;	
 }
	
}
int main(){
	int number;
	
	
	cout<<"Enter a Number : ";
	cin>>number;

table(number);
	
	return 0;
}