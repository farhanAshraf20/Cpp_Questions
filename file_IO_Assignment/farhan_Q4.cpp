/**************************************************************************************************
Q4: Count the number of words that end with 's'?
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
			int n = ch.length(); //getting length of string

			if(ch[n-1] == 's') //checking if last char is 's' or not
			{
				c++; //count no. of words
			}
		}

		cout << "Total no. of words ending with 's' : " << c <<"\nend\n"<< endl;

	}

input.close(); //close the file

return 0;
}
