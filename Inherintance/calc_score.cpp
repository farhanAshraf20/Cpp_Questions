//calculate total score and percentage

#include<iostream>
using namespace std;

class test
{
	public:
	
	int marks[5];
	
	int getMarks()
	{
		cout << "Enter marks of 5 subjects " << endl;
		
		for(int i=0;i<5;i++)
		{
			cin >> marks[i];
		}
				
		return 0;
	}
};

class student
{
	public:
	
	int roll_no;
	char name[20];
	
	int getinfo()
	{
		cout << "Enter roll_no : " << endl;
		cin >> roll_no;
		
		cout << "Enter name : " << endl;
		cin >> name;
		
		return 0;
	}
};

class result : public student, public test
{
	public:
	
	int total=0, percent=0;
	
	void calculate()
	{		
		for(int i=0;i<5;i++)
		{
			cout << marks[i]<<endl;
			total = total + marks[i];
		}
		
		percent = (total/5.0);
		
		cout << "Roll no - " << roll_no << endl << "Name - " << name << endl;
		cout << "Total score - " << total << endl << "Percentage - " << percent << "%" << endl;
	}
}; 


int main()
{
	result r1;
	
	r1.getinfo();
	r1.getMarks();
	r1.calculate();
	
	return 0;
}
