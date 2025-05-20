#include<iostream>
using namespace std;
class vector{
private	:
	float a;
	float b;
public:
  vector(float aa=0,float bb=0){
  	a=aa;
  	b=bb;
  }	
  vector operator -(vector const &obj){
  	vector res;
  	res.a=a-obj.a;
  	res.b=b-obj.b;
  	return res;
  }
  void display(){
  	cout<<"Vectors are : "<<a<<" and "<<b;
  }
};
int main(){
	vector o1(5,3);
	vector o2(2,1);
	vector o3;
	o3=o1-o2;
	o3.display();
	return 0;
}