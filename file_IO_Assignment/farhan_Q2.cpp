/**************************************************************************************************
Q2: Count the number of words that has 'a' in them?
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

	while(input >> ch) //read a char from file and save it to 'ch'
	{
		int n = ch.length();

		for(int i = 0; i < n;i++)
		{
			if(ch[i] == 'a'||ch[i] == 'A')
			{
			c++; //count no. of words
			break;
			}
		}

	}

	cout << "Total number of words that has 'a' in them present in the file : " << c <<"\nend\n"<< endl;
}

input.close(); //close the file

return 0;
}
