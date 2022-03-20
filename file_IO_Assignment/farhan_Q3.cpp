/**************************************************************************************************
Q3: Count the number of words that start with 'e'?
Date : 20-Mar-2022
Farhan Ashraf
*****************************************************************************************************/

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
ifstream input;
string ch;
int c=0;
input.open("file_Q1.txt"); //open the file

	if(!input)
	{
		cout << "The file doesn't exists." << endl;
	}

	else
	{
		while(input >> ch) //read a string from file and save it to 'ch'
		{
			if(ch[0] == 'e'||ch[0] == 'E') //checking if 1st char is 'e' or not
			{
				c++; //count no. of words
			}
		}

		cout << "Total number of words that start with 'e' : " << c <<"\nend\n"<< endl;
	}

input.close(); //close the file
return 0;
}
