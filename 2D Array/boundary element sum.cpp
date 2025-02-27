//boundary element sum
#include <iostream>
using namespace std;

int main() {
    int n;
    
    
    cout << "Enter the Number : ";
    cin >> n;

    int arr[n][n]; 

    
    cout << "Enter elements of the Number: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int boundarysum = 0;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                boundarysum += arr[i][j];
            }
        }
    }

    
    cout << "Sum of boundary elements: " << boundarysum << endl;

    return 0;
}
