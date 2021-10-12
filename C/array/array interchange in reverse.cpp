#include<iostream>
using namespace std;
main()
{
	int a[10],b[10],i,n;
	cout<<"how many enteries:";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (i=n-1;i>=0;i--)
	{
		b[i]=a[i];
		cout<<b[i]<<"\n";
	}	
}
