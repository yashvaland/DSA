// school
// trustee - authority all
// principal - teacher to student
// teacher - monitor to students
// monitor - student
// student -
#include<iostream>
using namespace std;

class School{
	private:
		string name,location,medium,std;
	
		
	public:
	void set(string name, string location, string medium,string std)
	{
			this->name = name;
			this->location = location;
			this->medium = medium;
			this->std=std;
	}	
	void get()
	{
			cout<<"......Schools......"<<endl;
			cout<<" Name: "<< name <<endl;
			cout<<" Location : " << location  <<endl;
			cout<<" Medium : "<< medium <<endl;
			cout<<" Std :"<<std<<endl<<endl;
	}
};
class Trustee{
	private:
		string name,number,role;
		
	public:
	void set(string name, string number, string role)
	{
			this->name = name;
			this->number = number;
			this->role = role;
	}	
	void get()
	{
			cout<<"......Trustee......"<<endl;
			cout<<" Name: "<< name <<endl;
			cout<<" Number : " << number  <<endl;
			cout<<" Role : "<< role <<endl<<endl;
	}
};
class Principal{
	private:
		string name,number,role,medium;
		
	public:
	void set(string name, string number, string role,string medium)
	{
			this->name = name;
			this->number = number;
			this->role = role;
			this->medium=medium;
	}	
	void get()
	{
			cout<<"......Principal......"<<endl;
			cout<<" Name: "<< name <<endl;
			cout<<" Number : " << number  <<endl;
			cout<<" Role : "<< role <<endl;
			cout<<" Medium : "<<medium<<endl<<endl;
	}
};
class Teachers{
	private:
		string name,number,role,medium,subject;
		
	public:
	void set(string name, string number, string role,string medium,string subject)
	{
			this->name = name;
			this->number = number;
			this->role = role;
			this->medium=medium;
			this->subject=subject;
	}	
	void get()
	{
			cout<<"......Teacher......"<<endl;
			cout<<" Name: "<< name <<endl;
			cout<<" Number : " << number  <<endl;
			cout<<" Role : "<< role <<endl;
			cout<<" Medium : "<<medium<<endl;
			cout<<" Subject : "<<subject<<endl<<endl;
	}
};
class Monitor{
	private:
		string name,role,medium,std;
		
	public:
	void set(string name, string role,string medium,string std)
	{
			this->name = name;
			this->role = role;
			this->medium=medium;
			this->std=std;
			
	}	
	void get()
	{
			cout<<"......Monitor......"<<endl;
			cout<<" Name: "<< name <<endl;
			cout<<" Role : "<< role <<endl;
			cout<<" Medium : "<<medium<<endl;
			cout<<" Std :"<<std<<endl<<endl;
			
	}
};
class Students
{
	private:
		string rollno,name,std,medium;
		
	public:
		void set(string rollno, string name,string std,string medium)
		{
			this->rollno=rollno;
			this->name=name;
			this->std=std;
			this->medium=medium;
		}
		void get()
		{
			cout<<"......Students......"<<endl;
			cout<<" Roll No: "<< rollno <<endl;
			cout<<" Name: "<< name <<endl;
			cout<<" Std :"<<std<<endl;
			cout<<" Medium : "<<medium<<endl<<endl;
		}
		
};

int main(){
	School s1,s2,s3;
	Trustee t1;
	Principal p1,p2;
	Teachers tt1,tt2,tt3;
	Monitor m1,m2,m3,m4;
	Students ss1,ss2,ss3,ss4,ss5;
	
	s1.set("Matrubhmi Vidhyalay","Dindoli ,Surat","Gujarati","1 To 12th Commerce/Scince");
	s2.set("StudyCare English","Dindoli ,Surat","English","1 To 12th Commerce/Scince");
	
	t1.set("Atul Bhai","+91 9273890422","Authority All");
	
	p1.set("Manoj Bhai","+91 2930921092","Teachers To Students","Gujarati");
	p2.set("Das Bhai","+91 2738729098","Teachers To Students","English");
	
	tt1.set("Sarad Bhai","+91 7876478931","Monitor To Students","Gujarti","Scince");
	tt2.set("Nilesh Bhai","+91 7354223546","Monitor To Students","Gujarti","Maths");
	tt3.set("Aman Bhai","+91 6347589412","Monitor To Students","English","Scince");
	
	m1.set("Hardik","Students","Gujarati","10th");
	m2.set("Shavan","Students","Gujarati","11th");
	m3.set("Dax","Students","English","10th");
	m4.set("Alpesh","Students","Englsih","11th");
	
	ss1.set("01","Hitesh","10th","Gujarati");
	ss2.set("11","Smit","10th","Gujarati");
	ss3.set("21","Shyam","11th","Gujarati");
	ss4.set("20","Mitesh","10th","English");
	ss5.set("22","Harshil","12th","English");
	
	s1.get();
	s2.get();
	t1.get();
	
	p1.get(); 
	p2.get();

	tt1.get();
	tt2.get();
	tt3.get();
	
	m1.get();
	m2.get();
	m3.get();
	m4.get();	
	
	ss1.get();
	ss2.get();
	ss3.get();
	ss4.get();
	ss5.get();

return 0;
}