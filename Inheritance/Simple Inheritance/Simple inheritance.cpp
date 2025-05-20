#include<iostream>
using namespace std;
class start{
	public: 
	void display(){
		cout<<"This is from the starting.";
	}

};
class end:public start{

	
};

int main(){
 end obj;
 obj.display();
}