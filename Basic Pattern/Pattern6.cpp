#include<iostream>
using namespace std;
//5
//4 4
//3 3 3
//2 2 2 2
//1 1 1 1 1

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 5; j >=i; j--) {
            cout << i<<" ";
        }
        cout << endl;
    }
    return 0;
}