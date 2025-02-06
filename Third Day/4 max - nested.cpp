//4 max - nested

#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	
	cout<<"Enter A value :";
	cin>>a;
	cout<<"Enter B value :";
	cin>>b;
	cout<<"Enter C value :";
	cin>>c;
	cout<<"Enter D value :";
	cin>>d;	
	
	if(a>b){
		if(a>c){
			if(a>d){
				cout<<"A is Max";
			}
			else{
				cout<<"D is Max";
			}
				}
			
		
		else{
			if(c>d){
				cout<<"C is Max";
			}
			else{
				cout<<"D is Max";
			}
			
		}
		
}
	else{
		if(b>c){
			if(b>d){
				cout<<"B is Max" ;	
			}
			else{
				cout<<"D is Max" ;
			}
		}
		
		else{
			if(c>d){
				cout<<"C is Max";
			}
			else{
				cout<<"D is Max";
			}	
		}
	}
	
	return 0;
}