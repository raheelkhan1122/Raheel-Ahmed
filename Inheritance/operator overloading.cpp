#include<iostream>
using namespace std;
class complex{
	private:
		int real;
		int img;
	public:
	complex(int r=0,int i=0){
		real=r;
		img=i;
	}	
	complex operator +(complex const &obj){
		complex res;
		res.real=real+obj.real;
		res.img=img+obj.img;
		return res;
	}
	void display(){
		cout<<"real : "<<real<<" img : "<<img<<endl;
	}
};
int main(){
complex c1(3,2);
complex c2(1,2);
complex c3;
c3=c1+c2;
c3.display();
return 0;
}