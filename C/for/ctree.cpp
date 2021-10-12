#include<iostream>
using namespace std;
main()
{
	int i,j,k,n;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cout<<"\t"<<"  ";
		for(j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for (k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	for (i=2;i<=(n+1);i++)
	{
		cout<<"\t"<<" ";
		for(j=1;j<=((n+1)-i);j++)
		{
			cout<<" ";
		}
		for (k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	for (i=3;i<=(n+2);i++)
	{
		cout<<"\t";
		for(j=1;j<=((n+2)-i);j++)
		{
			cout<<" ";
		}
		for (k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	for (i=1;i<=(n+2);i++)
	{
		cout<<"\t";
		for (j=1;j<=(n-1);j++)
		{
			cout<<" ";
		}
		for (k=n;k<=(n+1);k++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
}
