#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Employs{
	protected:
		string name;
		int salary;
		int id;
	public:
	Employs(string n,int s,int i){
		name=n;
		salary=s;
		id=i;
	}	
	virtual void display(){
	    cout<<"--------------------"<<endl;
		cout<<"Name : "<<name<<"\nSalary : "<<salary<<"\nID : "<<id<<endl;
	    cout<<"--------------------"<<endl;
	}
		
};
class Manager:public Employs{
	private:
		string department;
	public:
		Manager(string d,string n,int s,int i):Employs(n,s,i){
			department=d;
		}
		void display() override{
		 cout<<"--------------------"<<endl;
		cout<<"Name : "<<name
		<<"\nSalary : "<<salary
		<<"\nID : "<<id
		<<"\nDepartment : "<<department<<endl;
	    cout<<"--------------------"<<endl;
		}
};
class Developer:public Employs{
	private:
		string Programminglanguage;
	public:
	Developer(string p, string n, int s, int i) : Employs(n, s, i) {
    Programminglanguage = p;
}
	void display() override{
	 cout<<"--------------------"<<endl;
	cout<<"Name : "<<name<<"\nSalary : "<<salary<<"\nID : "<<id<<"\nProgramming Language : "<<Programminglanguage<<endl;
    cout<<"--------------------"<<endl;
		}	
};
int main(){
	Manager obj("CS","Rahol",300000,23456);
	Developer obj1("c++","Raheel Ahmed",2300000,240305);
	obj.display();
	obj1.display();
	return 0;
}