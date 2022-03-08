#include <iostream>
using namespace std;
class  A
{
    public:
    int x=20;
    
    
};
class B:public A 
{
    public: 
   int  y=20;
    
};

class c:public B
{
    public:
    int z=22;
    
};

class D:public B,public c
{
    public:
    int A=99;
    
};


int main() {
   
   D obj;
 
   cout<<"z="<<obj.z<<endl;
   cout<<"A="<<obj.A<<endl;
   
   
    

    return 0;
}