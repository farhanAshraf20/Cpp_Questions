//hybrid inheritance

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

class C : public A	//child class
{
	public:
	
	int z=10;
};

class D : public B, public C	//child class
{
	public:
	
	int p=15;
	
	void displayD()
	{
		cout << "function of class D called" << endl;
		cout << y << "," << z << endl;
	}
};

class E : public D, public C	//child class
{
	public:
	
	//int q=20;
	
	void displayE()
	{
		cout << "function of class E called" << endl;
		cout << y << "," << z << "," << p << "," << endl;
	}
};

int main()
{
	D d1;
	E e1;
	
	//accessing inherited class 
	d1.displayD();
	e1.displayE();
	
	return 0;
}
