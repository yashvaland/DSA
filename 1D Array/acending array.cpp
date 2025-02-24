//wap to sort 1d array in  acending 



#include <iostream>
using namespace std;

int main(){
	int a[5]={-5,-4,54,56,67};
	
	
	for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "acending  : ";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " " ;
    }
	return 0;	
}
	
