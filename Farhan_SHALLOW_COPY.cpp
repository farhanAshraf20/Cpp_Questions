/*
*DEMO FOR SHALLOW COPY
*Date: 20-feb-2022
*Farhan Ashraf
*/
#include<iostream>

using namespace std;

class demo{
	int d1,d2,*p;
	
	public:
	demo(){
	p=new int;		
	}
	void setVal(int i,int j,int k){
	d1=i;
	d2=j;
	*p=k;		
	}

	void display(){
	cout<<"Value for d1 "<<d1<<" d2 "<< d2 <<" pointer "<<*p<<endl;
	}
};

int main(){
demo d;
d.setVal(10,20,30);
d.display();
// CALL COMPILERS COPY CONSTRUCTOR = SHALLOW COPY
demo d3;
d3=d;
d3.display();


//  UPDATE THE VALUES
d.setVal(100,200,300);
d.display();
d3.display();

return 0;
}
