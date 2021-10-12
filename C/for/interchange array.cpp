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
	for (i=0;i<n;i++)
	{
		b[i]=a[i];
		cout<<b[i]<<"\n";
	}	
}
