#include <iostream>
using namespace std;

class A
{
    
    public :
    
    int a=2;
    
    
};

class B:public A
{
  public :
  int b=3;  
};


int main() 
{
	B c;
	cout<<c.b<<endl;
	cout<<c.a<<endl;
	return 0;
}
