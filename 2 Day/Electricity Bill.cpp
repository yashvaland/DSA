//Electricity Bill
//0 unit to 50 unit => 1rs/unit
//51u to 100u =>1.5rs/unit
//100u to 150 => 2rs/unit
//150u =>3rs/unit

#include<iostream>
using namespace std;

int main(){
	int unit,bill;
	
	cout <<"Enter Your Unit :";
	cin >> unit;
	
	if(unit<0){
		cout << "Please check the unit. "<<endl;
	}
	else if(unit>0 && unit<=50){
		bill=unit*1;
	}
	else if(unit>50 && unit<=100){
		bill=(50*1)+((unit - 50) * 1.5);
	}
	else if(unit>100 && unit<=150){
		bill=(50 * 1) + (50 * 1.5) + ((unit - 100) * 2);
	}
	else if(unit>150){
		bill=(50 * 1.0) + (50 * 1.5) + (50 * 2.0) + ((unit - 150) * 3.0);
	}
	else{
		cout << "Enter valid Unit ";
	}
	
	if(unit>=0){
	
	cout << "Your Bill : " <<endl;
	cout << "Unit :" << unit <<endl;
	cout <<"Final Bill : " << bill <<endl;
	
	}
	
	
}