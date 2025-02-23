//wap to get and print 1D array, by user input.
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
	cout<<endl;
   
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
