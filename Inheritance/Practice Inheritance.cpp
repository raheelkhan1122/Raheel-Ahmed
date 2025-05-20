#include<iostream>
using namespace std;
class Grandfather{
	protected:
		x=23;
	public:	
		void statement(){
			cout<<"This is the grand father.And value of x is : "<<x;
		}
};
class father:protected Grandfather{
	
};
class son:public father{
	
};
int main(){
	son obj;
	obj.statement();
}