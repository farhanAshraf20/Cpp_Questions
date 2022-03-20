/**************************************************************************************************
Q5: Write a cpp program that shows a menu:

  1: Enter student detail
  2: find student

	*If the user selects 1: then it will ask for some details like:

	*ID, student name, branch, Location. Save all these information in the file. 
	  Each student's details will be stored in one line.

	*If the user selects 2: ask for the ID from the user that is needed to be searched. 
	  Then look for this id in the file (database).

	*If it is available then return all the information about the particular student. 
	 
	*If the ID is not available, then print some error message.

Date : 20-Mar-2022
Farhan Ashraf
*****************************************************************************************************/

#include<iostream>
#include<fstream>
#include<cstring>
#include<ctype.h>

using namespace std;

class student
{

public:

int id;
string name, branch, location;

void getDetails() //function to get student details from stdin
{

	cout << "Enter id, name, branch, location" << endl;

	cout << "id: ";
	cin >> id;

	cout << "name: ";
	cin >> name;

	cout << "branch: ";
	cin >> branch;

	cout << "location: ";
	cin >> location;

}

void addDetails() //write the data to file
{
	fstream file;
	student stud;

	file.open("file_Q5.txt", ios::app|ios::binary);

	stud.getDetails(); //take input student data

	file.write((char *) &stud, sizeof(stud));

	file.close();
}

void findStud()
{
	int sid, count=0;
	fstream file;
	student stud;

	cout << "Enter the student id" << endl;
	cin >> sid;

	file.open("file_Q5.txt", ios::in|ios::binary);

	//count total entries in file
	while(!file.eof())
	{
		file.read((char *) &stud, sizeof(stud));
		count++;
	}

	cout << "lines count: " << count << endl;
	file.close();

	//displaying stud details if found
	file.open("file_Q5.txt", ios::in|ios::binary);

	for(int i = 0; i < count-1; i++)
	{
		file.read((char *) &stud, sizeof(stud));

		if(sid == stud.id)
		{
			cout << "\nstudent id matched" << endl;
			cout << "Id number: " << stud.id << endl;
			cout << "Name: " << stud.name << endl;
			cout << "Branch: " << stud.branch << endl;
			cout << "Location: " << stud.location << endl;
		}
	}

	file.close();

	}

}; //end of class

int main()
{

	int count=0;
	char opt;
	int flag = 1;
	student s1;


	//menu driven operation
	while(flag)
	{
	try
	{
	//Displaying menu
	cout << "\nSelect the operation you want to perform : \n1. Enter Student Details\n2. Find Student\n3. Exit" << endl;
	cin >> opt;

		if(isalpha(opt))
		{
			
			cout << "This is alphabet\nPlease enter number" << endl;
			throw opt;
		}

		else
		{
			switch(opt)
			{
				case '1':
				s1.addDetails();
				break;

				case '2':
				s1.findStud();
				break;

				case '3':
				flag = 0;
				break;

				default:
				cout << "Invalid Option\nTry Again" << endl;
				break;
			}
		}

	}
	catch(char opt)
	{
	cout << "Not a number\nPlease enter a number only "<< endl;
	break;
	}
	}
	

return 0;
}
