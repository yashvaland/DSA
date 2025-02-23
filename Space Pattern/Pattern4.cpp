#include<iostream>
using namespace std;

//		  5
//		5 4
//	   5 4 3
//	 5 4 3 2
// 5 4 3 2 1
int main(){
	
	  for(int i=5; i>=1;i--){ //row
		for(int k=i;k>1;k--){
			cout<<"  ";
		}
       for(int j=5;j>=i;j--){ //col
           cout<<j<<" ";
       }
       cout<<endl;
   }
	return 0;
}