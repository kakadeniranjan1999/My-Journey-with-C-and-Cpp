#include<iostream>
using namespace std;
main()
{
	int a[10],n,i;
	cout<<"How many enteries :";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";
	}
}
