//wap to find max element of 1d array.
#include <iostream>
using namespace std;

int main(){
	int a[5]={23,24,54,56,1};
	int max=a[0];
	
	for(int i=0;i<5;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	cout<<max;	
	
	return 0;
}