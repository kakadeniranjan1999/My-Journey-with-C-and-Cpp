#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter 3 nos:";
	cin>>a>>b>>c;
	if (a>b && a>c)
	{
		cout<<"a is max";
	}
	else if (b>a && b>c)
	{
		cout<<"b is max";
	}
	else if (c>b && c>a)
	{
		cout<<"c is max";
	}
}
