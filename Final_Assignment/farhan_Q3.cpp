/*********************************************************************************************************
Q3: You have a binary string with length N. You are allowed to do swap() operations of two elements
only if the index parity of both elements is the same. This means that: you can swap() an element at
index 2, with any element at index4, 6, 8 etc. (even parity), similarly the element at index 3 can be
swapped with the element at index1, 5,7,9 etc.
Ex: Given string 1110, you can swap 2nd and 4th char to get 1011. But, you can never get 1101 if you
follow the swap rules.
Now, the task is to find the number of times substring 01 can occur for all such possible swaps.

Ex: 1110 does not have any substring of 01. Now you can swap2nd and 4th to get 1011, this will have
"one" occurrence of 01. We can now perform more swaps but we will never get any more 01
substrings here.
Input: 00100 output should be 1, for: 01010-> 2, for 10001-> 2
*****************************************************************************************************************/

#include<iostream>
using namespace std;

int f_MAX_C = 0;  //Declaring & initializing a global variable

void s_swap(char [], int);
int f_search(char [], int);
void f_swaps(char *, char *);

int main()
{
    int N=0;
    
    cout << "Enter the length of binary string : " << endl;
    cin >> N;
    
    char bin_array[N];
    
    cout << "Enter elements of binary string : " << endl;
    cin >> bin_array;
    
    f_MAX_C = f_search(bin_array, N);       //initial f_search
    
    s_swap(bin_array, N);             //calling swap function
   
    cout << "MAX Number of '01' occured is : " << f_MAX_C << endl;
    
    
    return 0;
    
}  

void s_swap(char arr[], int N)            //function to swap array elements based on certain conditions
{
    int len, max;
    
    //checking length of arr 'N' is even or odd
    if(N%2 == 0)        //if N is even
        len = N/2;
    
    else                //if N is odd
        len = (N+1)/2;
    
    
    //swapping algorithm
    for(int i = 0; i<=len; i++)
    {
        if(arr[i] != arr[i+2])          //both value are equal
         {
            f_swaps(&arr[i], &arr[i+2]);           //swap 2 elements
            max = f_search(arr, N);                 //look for new max in new array
            
            if( max > f_MAX_C)            // if more no. of '01' found update f_MAX_C
                f_MAX_C = max;
         }

       else
           continue;
    }
}

int f_search(char arr[], int N)            //function to f_search an array and count no. of '01' pairs
{
    int max=0;
    
    for(int i = 0; i<N; i++)
    {
        if(arr[i] == '0' && arr[i+1] == '1')        //check for '01' pair in giver arr[]
            max++;
            
        else
            continue;
    }
    
    return max;
}

void f_swaps(char *a, char *b)           //function to swap 2 values
{
    char t;
    
    t = *a;
    *a = *b;
    *b = t;
}