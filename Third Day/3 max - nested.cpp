// 3 max - nested

#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Enter A value :";
	cin>>a;
	cout<<"Enter B value :";
	cin>>b;
	cout<<"Enter C value :";
	cin>>c;
	
	if(a>b){
		if(a>c){
			cout<<"A is Max";	
		}
		else{
			cout<<"C is Max";
		}
		
	}	
	else{
		if(b>c){
			cout<<"B is Max";
		}
		else{
			cout<<"C is Max";
		}
		
	}
	
	return 0;
}