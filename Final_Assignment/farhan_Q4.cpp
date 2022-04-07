
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