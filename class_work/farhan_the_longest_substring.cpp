//farhan Ashraf
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    char str1[200];

    cin>>str1;
    
    int f_s1 =  strlen(str1);
    int f_c1 = 1,f_c2 = 0,f_m =1;;
    
    cout<<"Input : "<<str1<<endl;
    cout<<"Size of input string : "<< f_s1 <<endl;
      //for(int i=1 ; str1[i] != '\0'; i++)
      for(int i=1 ; i<f_s1 ; i++)
      {
        for(int j = f_c2 ; j<i ; j++)
        {
            if(str1[i] != str1[j])
            {
                f_c1++;
            }
            else
            {
              f_c2 = j + 1;
              break;
            }
        }
        
        if(f_m < f_c1) // checking the lenth of the longest substring consisting of unique characters
        {
            f_m = f_c1;
        }
        
        f_c1 = 1;
      }
      
      cout<<"The lenth of the longest substring : "<< f_m <<endl;
      
    return 0;
}