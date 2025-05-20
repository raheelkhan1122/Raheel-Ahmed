#include<iostream>
using namespace std;
class Vehicle{
	public:
	void car(){
		cout<<"This is your  Car."<<endl;
	}
	void car(string name){
		cout<<"This is your "<<name<<" Car."<<endl;
	}
	void car(string name,int year){
		cout<<"This is your "<<name<<" Car "<<year<<"Edition"<<endl;
	}
};
int main(){
	Vehicle obj;
	obj.car();
	obj.car("Mercedes");
	obj.car("Mercedes",2025);
	
}