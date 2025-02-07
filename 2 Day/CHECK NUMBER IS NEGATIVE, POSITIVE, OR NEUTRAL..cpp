//WAP TO CHECK NUMBER IS NEGATIVE, POSITIVE, OR NEUTRAL.

#include<iostream>
using namespace std;

int main(){
	double number;
	
	cout <<"Enter A Number :" ;
	cin>>number;
	
	if(number>0){
		cout <<"Number is Positive";
	}
	else if(number<0){
		cout << "Number is Negative";
	}
	else{
		cout << "Number is Neutral";
	}
	return 0;
}