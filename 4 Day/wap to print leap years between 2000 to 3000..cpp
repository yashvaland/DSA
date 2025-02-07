//wap to print leap years between 2000 to 3000.
#include<iostream>
using namespace std;

int main(){
	
	int year=2000;
	while(year<=3000){
		cout<<year<<" ";
		year+=4;
	}
	
	return 0;
}