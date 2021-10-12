#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter 3 numbers:";
	cin>>a>>b>>c;
	if (a>b)
	{
		if (a>c)
		{
		cout<<"a is max";
	    }
		else 
		{
			cout<<"c is max";
		}
	}
	else
	{
		if (b>c)
		{
			cout<<"b is max";
		}
		else 
		{
			cout<<"c is max";
		}
	}
}
