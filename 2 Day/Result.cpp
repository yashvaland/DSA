//WAP TO PRINT GRADES OF STUDENT BASED ON THEIR PERCENTAGE.

#include<iostream>
using namespace std;

int main(){
	float per;
	
	cout<<"Enter The Percentage :" ;
	cin>>per;
	
	
	if(per>=90 && per<=100){
		cout << "Grade: A+";
	}

	else if(per>=80 && per<=89){
		cout << "Garde: A";
	}

	else if(per>=70 && per<=79){
		cout << "Garde: B+";
	}

	else if(per>=60 && per<=69){
		cout <<"Grade: B";
	}

	else if(per>=50 && per<=59){
		cout <<"Garde : C";
	}

	else if(per>=34 && per<=49){
		cout << "Grade : D";
	}

	else{
		cout << "Garde: Fail";
	}
 return 0;
}