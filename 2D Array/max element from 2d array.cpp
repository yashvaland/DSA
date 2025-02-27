//max element from 2d array
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> cols;

    int arr[rows][cols];

    
    cout << "Enter elements of the array:"<<endl;
    int maxElement;  

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
            if (i == 0 && j == 0) {  
                maxElement = arr[i][j];
            } else if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }

   
    cout << "Maximum Number: " << maxElement << endl;

    return 0;
}
