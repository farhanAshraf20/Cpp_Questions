#include <iostream>
using namespace std;

class A
{
    
    private :
    int p=5;
    protected :
    int s=1;
    public :
    int a=2;
    
};

class B:public A
{
  public :
  void dis()
  {
  //cout <<p<<endl;
  cout <<s+1<<endl;
  cout <<a+1<<endl;
  }
};


int main() 
{
   B b;
   b.dis();

	return 0;
}
