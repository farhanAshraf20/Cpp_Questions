/*********************************************************************************************************
Q8.
Input: AB, output: Yes
Input: ABAABB, output: No
Date : 06-Apr-2022
Farahn Ashraf
***********************************************************************************************************/

#include <iostream>
using namespace std;
	int f=1,t=1;
string check(string str)
{
	int n = str.length();

	if(n %2 == 0)
	{
    	int i;
    	for (i = 1; i <= n; i+=2)
    	{
    	   
            if(str[0] == 'A')
                {
                	if (str[i-1] == 'A' && str[i] == 'B')
                        {
                    	    f=0;
                    	}
                    	
                    	t=f;
                    	f=1;
                    	
                    	
                }
            
            else if(str[0] == 'B')
                {
                    if(str[i-1] == 'B' && str[i] == 'A')
                        {
                            f=0;
                        }
                        t=f;
                    	f=1;
                }
            
            else
            {
               return "No"; 
            }
    	}
    	
    	if(t==0)
    	{
    	    return "Yes";
    	}
    	else
    	{
    	    return "No";
    	}
    }
    
    else
    {
        return "No";
    }
    
}

int main()
{
	string str;
	cout<<"Enter a string : ";
	cin>> str;

	cout << check(str);
	return 0;
}
