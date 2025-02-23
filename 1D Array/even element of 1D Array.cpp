//wap to print only even element of 1D Array.
#include <iostream>
using namespace std;

int main() {
    int n,arr[n];


    cout << "Enter the number of elements: ";
    cin >> n;

   
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    cout << "Even elements are: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { 
            cout << arr[i] << " ";
        }
        else{
        	cout<<"Not Even Number ";
		}
    }

    return 0;
}
