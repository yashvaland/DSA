// wap to find factorial user passed number using udf.
#include<iostream>
using namespace std;

int factorail(int num){
	int fact=1;
	for(int i=1;i<=num;i++){
		fact*=i; 
	}
	return fact;
	
}   
main(){
	int number; 
	cout<<"Enter Number : ";
	cin>>number;
	
	if(number<0){
		cout<<"factorial is not defined.."<<endl;
	}
	else{
		cout<<"factorial "<< number <<" is :"<<factorail(number)<<endl;
	}		
		
return 0;
}
	