#include<iostream>
using namespace std;
main()
{
	int i,j,k,n;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cout<<"\t";
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
	for (i=1;i<=n;i++)
	{
		cout<<"\t"<<" ";
		for(j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for (k=1;k<=(n+3);k++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
		cout<<"\t";
		cout<<" * *"<<"\t"<<"   * *"<<"\n";
		cout<<"\t"<<"* *"<<"\t"<<"  * *"<<"\n";
		for (i=1;i<=2;i++)
		{
			for (j=1;j<=(n+20);j++)
			{
				cout<<"* ";
			}
			cout<<"\n";
		}
}
