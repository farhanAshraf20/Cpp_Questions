#include <iostream>
using namespace std;
class  A
{
    public:
    int x=20;
    
    
};
class B: public A
{
    public: 
   int  y=20;
    
};

class c:public A
{
    public:
    int z=22;
    
};

class D:public B,public c
{
    public:
    int A=99;
    
};
class E:public D,public c
{
    public:
    int B=53;
};

int main() {
   D obj;
   E obj1;
  // cout<<"x="<<obj1.x<<endl;
   cout<<"y="<<obj.y<<endl;
   cout<<"z="<<obj.z<<endl;
   cout<<"A="<<obj.A<<endl;
   cout<<"B="<<obj1.B<<endl;
   
    

    return 0;
}