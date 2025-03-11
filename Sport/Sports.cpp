// wap to create a class name Sport with attributes
    // name,age,gameName,role
    // create method to input and output details.
    // attribute should be privare and method should be public.
#include<iostream>
using namespace std;

class sports{
	private:
		int id;
		string name;
		int age;
		string gameName;
		string role;
		
	public:
	void input(int id, string name, int age, string gameName ,string role)
	{
			this->id = id;
			this->name = name;
			this->age = age;
			this->gameName = gameName;
			this->role = role;
	}	
	void output()
	{
			cout<<" id : "  << id  <<endl;
			cout<<" Name: "<< name <<endl;
			cout<<" Age : " << age  <<endl;
			cout<<" Role : "<< role <<endl<<endl;
	}
};

int main(){
	sports cricket,football;
	cricket.input(07,"M S Dhoni",47,"Cricket","Batting");
	football.input(07,"Cristiano Ronaldo",40,"football","footballer");
	
	
	cricket.output();
	football.output();
	
}