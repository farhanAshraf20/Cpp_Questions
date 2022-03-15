//multilevel inheritance

#include<iostream>
using namespace std;

class person		//base class
{
	public:
	int age=22;
}; 

class student : public person		//child class
{
	public:
	int result=70;
};

class ITstud : public student		//multilevel child class
{
	public:
	int rank=50;
};


int main()
{
	person p1;
	student s1;
	ITstud it1;
		
	//calling object variables
	cout << p1.age << endl;
	cout << s1.age << " " << s1.result << endl;
	cout << it1.age << " " << it1.result << " " << it1.rank <<endl;
	
	return 0;
}
