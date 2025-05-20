#include<iostream>
#include<string>
using namespace std;
class shapes{
	public:
	void area(int l,int b){
	cout<<"Area of rectangle is : "<<l*b<<endl;
	}
	void area(double pie,int r){
		cout<<"Area of Circle is : "<<pie*r*r<<endl;
	}
	void area(float b,float h){
		cout<<"Area of Triangle is : "<<(b*h)/2<<endl;
	}
};
int main(){
	shapes obj;
	obj.area(4,5);
	obj.area(3.1416,6);
	obj.area(2.7,3.4);
	return 0;
}
