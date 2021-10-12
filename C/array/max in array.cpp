#include<iostream>
using namespace std;
main()
{
	int a[10],n,max=0,i;
	cout<<"How many enteries :";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for (i=1;i<n;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
		cout<<max;
	}
}
