//hybrid inheritance 2

#include<iostream>
using namespace std;

class A		//parent class
{
	public:
	
	int x=6;
	
}; 

class B : public A	//child class
{
	public:
	
	int y=8;
};

class C : public B	//child class
{
	public:
	
	int z=10;
};

class D : public B, public C 	//child class
{
	public:
	
	void displayD()
	{
		cout << "function of class D called" << endl;
		cout << z << " " << y << endl;
	}
};



int main()
{
	D d1;
	
	//accessing inherited class 
	d1.displayD();
	
	
	return 0;
}
