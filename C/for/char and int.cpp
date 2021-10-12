#include<iostream>
using namespace std;
main()
{
	char z[10],a,i;
	int b,c;
	cin>>a;
	for (i=0,c=48;i<10,c<=57;i++,c++)
	{
		z[i]=c;
	}
	b=a;
	for (i=0;i<10;i++)
	{
		if (z[i]==b)
		{
			b=i;
		}
	}
	cout<<b;
}
