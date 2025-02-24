#include<iostream>
using namespace std;
// 1  0  1  0  1  
//    0  1  0  1  
//       1  0  1  
//          0  1  
//             1
int main(){
    for(int i=1;i<=5;i++){
        for(int k=1;k<i;k++){
            cout << "   ";
        }
        for(int j=i;j<=5;j++){
           if(j%2==1){
               cout << "1  ";
           }
           else{
               cout << "0  ";
           }
        }
        cout << endl;
        
    }
    return 0;
}