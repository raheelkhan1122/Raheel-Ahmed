#include<iostream>
using namespace std;
class Boss{
	public:
	void statement(){
		cout<<"Be the Boss.";}
		
};
class Employ:public Boss {

};
class family:public Employ{

};
int main(){
	family boy;
	boy.statement;
}
