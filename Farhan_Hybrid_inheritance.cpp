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
  int b=a+3;  
};
class D:public A
{
    public :
  int o=a+6;  
};

class E:public B,public D
{
    public :
    int l=b+o;
    
};

int main() 
{
    B u;
    D i;
 	E c;
 	cout<<u.b<<endl;
 	cout<<u.a<<endl;
	cout<<c.b<<endl;
 	cout<<c.o<<endl;
 	cout<<c.l<<endl;

	return 0;
}
