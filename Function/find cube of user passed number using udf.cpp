//wap to find cube of user passed number using udf.

#include<iostream>
using namespace std;

int cube(int num){
	return num*num*num;
}
int main(){
	int num;
	
	cout<<"Enter a Number :";
	cin>>num;
	
	cout<<"Cube: "<< cube(num) <<endl;
	return 0;
}