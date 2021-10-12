#include<iostream>
using namespace std;
class shape
{
	public :
		double area(double q)
		{
			int a;
			a=(3.142*q*q);
			return a;
		}
		double area(double q,double w,double t)
		{
			int a;
			a=(q*w*t);
			return a;
		}
		double area(double q,double w)
		{
			int a;
			a=(q*w);
			return a;
		}
};
main()
{
	shape s;
	double x,r,b,c;
	int d;
	do
	{
	    cout<<"Enter your shape number:\n1)Circle\n2)Triangle\n3)Rectangle\n";
    	cin>>d;
    	switch(d)
    	{
    		case 1:cout<<"Enter the dimensions:";
    		       cin>>r;
    		       x=s.area(r);
    		       cout<<x<<"\n";
    		       break;
    		case 2:cout<<"Enter the dimensions:";
    		       cin>>r>>b>>c;
    		       x=s.area(r);
    		       cout<<x<<"\n";
    		       break;
    	    case 3:cout<<"Enter the dimensions:";
    		       cin>>r>>b;
    		       x=s.area(r);
     		       cout<<x<<"\n";
    			   break;
			default:cout<<"Invalid entry!!!";	   		          
    	}
    }
    while (d>=1 && d<=3);
}
