//hybrid inheritance---combining hierarchical and multiple inheritance

#include<iostream>
using namespace std;

class A		//base class
{
	public:
	void displayA()
	{
		cout << "Its class A "<< endl;
	}
}; 

class B	: public A
{
	public:
	void displayB()
	{
		cout << "Its class B "<< endl;
	}
};

class C : public A
{
	public:
	void displayC()
	{
		cout << "Its class C "<< endl;
	}
};

class D : public B, public C
{
	void displayD()
	{
		cout << "Its class D "<< endl;
	}
};

int main()
{
	B b1;
	C c1;
	D d1;
	
	cout << "calling obj of class B -> ";
	b1.displayA();
	
	cout << "calling obj of class C -> ";
	c1.displayA();
		
	cout << "calling obj of class D ->";
	//d1.displayA();			//cannot be  called
	d1.displayB();
	d1.displayC();
	
		
	return 0;
}
