#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){//row
		for(int k=5;k>i;k--){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){//col
			cout<<i<<" ";
		}
		cout<<endl;
	
	}
	return 0;
	}