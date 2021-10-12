#include<iostream>
using namespace std;
main()
{
	int a[10],n,min,i;
	cout<<"How many enteries :";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	min=a[0];
	for (i=1;i<n;i++)
	{
		if (min>a[i])
		{
			min=a[i];
		}
		cout<<min;
	}
}
