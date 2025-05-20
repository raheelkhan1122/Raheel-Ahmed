#include<iostream>
using namespace std;
class grandFather{
public:
	void display(){
		cout<<"This is from the Father Baby"<<endl;
	}
};
class Father{
	public:
		void show(){
		cout<<"This is from the Father."; 
	}
};
class Son:public grandFather,public Father{
	
};

int main(){
	Son obj;
	obj.display();
	obj.show();
}