//single level inheritance

#include<iostream>
using namespace std;

class animal		//parent class
{
	public:
	int legs=4;
}; 

class dog : public animal		//child class
{
	public:
	int tail = 1;
};

int main()
{
	animal a;
	dog d;
	
	cout << a.legs << " " << endl;
	cout << d.legs << " " << d.tail << endl;
	
	return 0;
}
