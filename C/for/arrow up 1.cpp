#include<iostream>
using namespace std;
main()
{
	int i,j,k,n;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for (k=1;k<=i;k++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	for (i=1;i<=(n-1);i++)
	{
		for(j=1;j==1;j++)
		{
			cout<<" ";
		}
		for (k=1;k<=i;k++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
}
