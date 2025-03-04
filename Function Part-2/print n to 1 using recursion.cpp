//print n to 1 using recursion

#include<iostream>
using namespace std;


void decrease(int n){
	if(n<1) return;
	cout<<n<<" ";
	decrease(n-1);

	
}
int main(){
	int n;
	
	cout<<"Enter Number : ";
	cin>>n;
	
	cout<<"Numbers from 1 to " << n << ": ";
	decrease (n);
	cout<<endl;
	return 0;
}
