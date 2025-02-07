//vote - nested
#include<iostream>
using namespace std;


int main(){
	int age ;
	
	cout<<"Enter Your Age : ";
	cin>>age;
	
	if(age>=18){
		if(age>=100){
			cout<<"Enter Valid age!";
		}
		
		else{
			cout<<"You Are Eligable For Vote !" ;
		}
		
	}
	else{
		if(age<17){
			cout<<"Enter Valid age!";
		}
		else{
			cout<<"You Are Not Eligable For Vote !";
		}
	}
	return 0;
}