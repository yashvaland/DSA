#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){
		for(int k=1;k<i;k++){
			cout<<"  ";
		}
		for(int j=5;j>=i;j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}