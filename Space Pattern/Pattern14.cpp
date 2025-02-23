#include <iostream>
using namespace std;
int main() {

   for(char i='A'; i<='E';i++){ //row
   
   		for(char k='E';k>i;k--){
   			cout<<"  ";
		   }
		   
       for(char j='A';j<=i;j++){ //col
           cout<<j<<" ";
       }
       cout<<endl;
   }

    return 0;
}