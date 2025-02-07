//Wap calculate discount based on customer purchase.
//0 to 1000=5%
//1001 to 5000=10%
//5001 to 10000=20%
//10000 + 25%

#include <iostream>
using namespace std;

int main(){
	
	int amount,finalamount,discount;
		
	cout <<"Enter Your Amount :";
	cin >> amount;
	
	if(amount>0 && amount <=1000){

		discount=(amount * 5)/100;
		finalamount = amount-discount; //amount=amount - discount
	}
	
	else if(amount>1000 && amount<=5000){
		discount=(amount * 10)/100;
		finalamount = amount-discount; //amount=amount - discount	
	}
	
	else if(amount>5000 && amount<=10000){
		discount=(amount * 20)/100;
		finalamount = amount-discount; //amount=amount - discount	
	}
	
	else if(amount>10000){
		discount=(amount * 25)/100;
		finalamount = amount-discount; //amount=amount - discount	
	}
	else{
		cout << "Enter valid amount ";
	}
	
	if(amount>=0){
	
	cout << "Your Bill : " <<endl;
	cout << "Amount :" << amount <<endl;
	cout <<"Final Amount : " << finalamount <<endl;
	
	}
	
	return 0;
}