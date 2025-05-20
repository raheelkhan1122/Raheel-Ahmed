#include<iostream>
using namespace std;
class numbers{
	private:
		int x;
		int y;
	public:
	numbers(int a=0,int b=0){
		x=a;
		y=b;
	}	
	numbers operator +(numbers const &obj){
		numbers res;
		res.x=x+obj.x;
		res.y=y+obj.y;
	}
	void display(){
		cout<<"X "<<x<<" Y "<<y;
	}
};
int main(){
	numbers n1(2,3),n2(4,5);
	numbers n3;
	n3=n1+n2;
	return 0;
	n3.display();
}