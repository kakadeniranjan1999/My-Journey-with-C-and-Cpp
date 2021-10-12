#include<iostream>
using namespace std;
main()
{
	int a[10],n,sum=0,i;
	cout<<"How many enteries :";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum;
}
