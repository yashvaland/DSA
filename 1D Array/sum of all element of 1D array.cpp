// wap to find sum of all element of 1D array.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0,arr[n];

    cout << "Enter the number of elements: ";
    cin >> n;


    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; 
    }

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
