#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e;
	cout<<"Enter 4 numbers:";
	cin>>a>>b>>c>>d;
	if (e=a>b ? a:b)
	{
		if (e=d>c ? e:c)
		{
			if (e=e>d ? e:d)
			{
				cout<<"max is:"<<d;
			}
		}
	}
}
