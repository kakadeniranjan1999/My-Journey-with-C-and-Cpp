#include<iostream>
using namespace std;
class accept
{
	int r,m1,m2,m3,t;
	float p;
    public:	
    	accept()
    	{
	    	cout<<"Enter your roll no.:";
	   	    cin>>r;
	    	cout<<"Enter your marks:";
		    cin>>m1>>m2>>m3;
    	} 
    	friend op();
    	friend disp();
};
class op
{
	int r,m1,m2,m3,t;
	float p;
    public:
    	op()
        {
	    	t=m1+m2+m3;
	    	p=(float)t/3;
	    }
	    friend disp();
};
disp()
	    {
	    	cout<<r<<"\n"<<t<<"\n"<<p;
		}
main()
{
	accept a;
	op z;
	disp();
}
