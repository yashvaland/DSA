#include<iostream>
using namespace std;

int main(){
	int num;
	for(int i=1;i<=5;i++){
		for(int j=i;j<=5;j++){
			if(num%2==0){
				cout<<0;
			}
			else{
				cout<<1;
			}
		}cout<<endl;
	}
}