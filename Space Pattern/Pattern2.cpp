#include <iostream>
using namespace std;
int main() {
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 

   for(int i=1; i<=5;i++){ //row
   
   	for(int k=5;k>i;k--){
   		cout<<"  ";
	   }
	   
    for(int j=i;j>=1;j--){ //col
           cout<<j<<" ";
       }
       cout<<endl;
   }

    return 0;
}