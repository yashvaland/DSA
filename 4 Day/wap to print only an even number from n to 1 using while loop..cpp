//wap to print only an even number from n to 1 using while loop.

#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Enter N Number: ";
	cin>>n;
	
	int i=1;
	
	while(i<=n){
		if(i%2==0){
		cout<<i<<" ";
		}
	i++;
	}
return 0;
}