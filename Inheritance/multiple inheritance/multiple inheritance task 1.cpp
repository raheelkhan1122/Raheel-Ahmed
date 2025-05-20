#include<iostream>
using namespace std;
class Member{
	protected:
		int memberId;
		string membershipData;
	public:
	Member(int m,string d){
		memberId=m;
		membershipData=d;
	}	
	 void displayMember(){
		cout<<"Member Id : "<<memberId<<endl;
		cout <<"Membership Data : "<<membershipData<<endl;
	}
};
class Staff{
	protected:
		int Staffid;
		string position;
	public:
	Staff(int s,string p){
		Staffid=s;
		position=p;
	}	
	void displayStaff() {
		cout<<"Staff Id : "<<Staffid<<endl;
		cout<<"Position : "<<position<<endl;
	}
};
class Memberstaff:public Member,public Staff{
	protected:
		string name;
	public:
	Memberstaff	(string n,int m,string d,int s,string p):Member( m, d),Staff( s, p){
		name=n;
	}
	void display(){
		cout<<"Name : "<<name<<endl;
		displayMember();
		displayStaff();
	}
};
int main(){
	Memberstaff obj("Raheel",240305,"8-3-2023",120,"Manager");
	obj.display();
}