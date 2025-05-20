#include<iostream>
using namespace std;
class Myclass{
	public:
void display(){
	cout<<"TIC TIC";
}	
};
class child:public Myclass{
	
};
class GrandChild:public child{
	
};
int main(){
	GrandChild obj;
	obj.display();
}