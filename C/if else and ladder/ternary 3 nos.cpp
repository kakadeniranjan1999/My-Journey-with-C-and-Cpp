#include<iostream>
using namespace std;
main()
{
	int a,b,c,d;
	cout<<"Enter 3 numbers:";
	cin>>a>>b>>c;
	if (d=a>b ? a:b)
	{
		if (d=d>c ? d:c)
		{
			cout<<"max is:"<<d;
		}
	}
}
