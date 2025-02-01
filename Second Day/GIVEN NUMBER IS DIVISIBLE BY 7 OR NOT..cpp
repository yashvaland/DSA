//WAP TO CHECK GIVEN NUMBER IS DIVISIBLE BY 7 OR NOT.

#include<iostream>
using namespace std;

int main(){
	int number;
	
	cout<<"Enter a Number :";
	cin>>number;
	
	
	if(number%7==0){
		cout<<"Number is Divisible By 7 . "<<endl;
	}
	else{
		cout<<"Number is Not Divisible By 7 . "<<endl;
	}
	
	return 0;
	}