//wap calculate discount based on customer purchase
#include<iostream>
using namespace std;

main(){
	int age;
	
	cout<<"Enter Your age :";
	cin>>age;

	if(age>=100 || age<=0){
		cout<<"Enter Valid age!";
	}
	else if(age>=18){
		
	cout<<"You Are Eligible For Vote";	
	}
	
	else{
		cout<<"You Are Not Eligible For Vote";
	}
}