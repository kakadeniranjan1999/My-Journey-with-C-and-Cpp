#include<iostream>
using namespace std;
main()
{
	int i,j,k,n;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cout<<"\t";
		for (j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for (k=1;k<=(n-2);k++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	for (i=(n-1);i>0;i--)
	{
		cout<<"\t";
		for (j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for (k=1;k<=(n-2);k++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
}
