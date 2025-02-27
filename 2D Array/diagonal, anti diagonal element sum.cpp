//diagonal, anti diagonal element sum

#include <iostream>
using namespace std;

int main() {
    int n;
    
    
    cout << "Enter Number: ";
    cin >> n;

    int arr[n][n]; 
    
    cout << "Enter elements of the Number: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int diagSum = 0, antiDiagSum = 0;

    for (int i = 0; i < n; i++) {
        diagSum += arr[i][i];             
        antiDiagSum += arr[i][n - i - 1]; 
    }

    
    cout << "Sum of maindiagonal: " << diagSum << endl;
    cout << "Sum of antidiagonal: " << antiDiagSum << endl;

    return 0;
}
