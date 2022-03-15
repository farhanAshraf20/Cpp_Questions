//single level inheritance using access modifiers

#include<iostream>
using namespace std;

class A		//parent class
{
	private:
	int x=41;
	
	protected:
	int y=23;
	
	public:
	int z=89;
	
	void displayA()
	{
		cout << "private -> " << x << " protected -> " << y << " public -> " << z << endl;
	}
}; 

class B : public A	//child class
{
	public:
	void displayB()
	{
		cout << /*"private -> " << x <<*/ " protected -> " << y << " public -> " << z << endl;
	}
};

class C : public B	//child class
{
	public:
	void displayC()
	{
		z += 1;
		y += 1;
		cout << /*"private -> " << x << */" protected -> " << y << " public -> " << z << endl;
	}
};

int main()
{
	B b1;
	C c1;
	A a1;
	
	//accessing inherited class 
	a1.displayA();
	b1.displayB();
	c1.displayC();
	
	return 0;
}
