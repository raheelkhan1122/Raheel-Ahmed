#include<iostream>
using namespace std;
class First{
	public:
	void display(){
		cout<<"This is from First class";
	}
};
class Second{
	public:
	void show(){
		cout<<"This is from second class";
	}
};
class Third:public First,public Second{
	
};
int main(){
	Third obj;
	obj.display();
	obj.show();
}