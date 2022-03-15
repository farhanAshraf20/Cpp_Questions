//multiple inheritance

#include<iostream>
using namespace std;

class person		//base class
{
	public:
	int age=22;
}; 

class student		//child class
{
	public:
	int result=70;
	
	void display()
	{
		cout << "result "<<result<<endl;
	}
};

class ITstud : public person, public student	//multiple inheritance
{
	public:
	int rank=50;
};


int main()
{
	ITstud it1;
		
	cout << it1.age << " " << " " << it1.rank <<endl;
	it1.display();
	
	return 0;
}
