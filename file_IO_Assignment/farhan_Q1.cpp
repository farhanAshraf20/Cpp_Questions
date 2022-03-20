/**************************************************************************************************
Q1: Count the number of time the word 'the' is present in the file?
Date : 20-Mar-2022
Farhan Ashraf
*****************************************************************************************************/

#include <iostream>
#include <fstream>
#include<string>
//#include <ifstream>
//#include <ofstream>
using namespace std;
int main()
{

ifstream input;
string ch;
int c=0;
//char k[4]="the" ;
string k1="the",k2="The";
input.open("file_Q1.txt");
if(!input)
{
	cout<<"\nfile does not exist \n"<<endl;
}
else
{
	while(input>>ch) //read data char by char
	{
	//cout<<ch<<' ';
	if (ch ==  k1 ||ch ==  k2)
	{
		c++;
	}
	}
cout<<"\nTotal no of time the word 'the' is present in the file = "<< c <<"\nend\n";
}
input.close();
return 0;
}
