#include <iostream>
using namespace std;

class A
{
    
    public :
    
    int a=2;
    
    
};

class B
{
  public :
  int b=3;  
};
class D:public B,public A
{
    public :
  int o=6;  
};

int main() 
{
	D c;
	cout<<c.b<<endl;
	cout<<c.a<<endl;
	cout<<c.o;
	return 0;
}
