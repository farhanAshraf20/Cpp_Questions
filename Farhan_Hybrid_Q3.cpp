//multiple inheritance

#include<iostream>
using namespace std;
#include <string>

class student 
{
public:
int rollno=22;
char name[20]="Farhan_Ashraf";
};

class test 
{
public:
int a[5];
int i;
void dis1()
{
for(i=0;i<5;i++)
{
   cin>>a[i];
  // cout<<endl<<a[i]<<endl;
}
}

};

class result : public student, public test //multiple inheritance
{
public:

void dis2()
{
    int k=0;
    
    cout<<"Type your full name : "<<name<<endl;
    cout<<"Roll No :"<< rollno<<endl;
    for(int i=0;i<5;i++)
    {
         k=k+a[i];
        // cout<<a[i]<<endl;
    }
    cout<<"Total Marks : " << k <<endl;
    cout<<"Percentage  : " <<((k/500.0)*100)<<endl;
}

};


int main()
{
    result r;
    r.dis1();
    r.dis2();

return 0;
}