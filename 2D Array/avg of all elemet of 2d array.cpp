//avg of all elemet of 2d array.
#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> cols;

    int arr[rows][cols]; 
    int sum = 0;
    
  
    cout << "Enter elements of the array:"<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
            sum += arr[i][j]; 
        }
    }

    int totalElements = rows * cols;  
    double average = static_cast<double>(sum) / totalElements; 

    
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
