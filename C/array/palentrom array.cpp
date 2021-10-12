#include<iostream>
using namespace std;
main()
{
	int a[10],b[10],i,j,n,flag;
	cout<<"how many enteries:";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (i=(n-1),j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	for (i=0,j=0;i<n,j<n;i++,j++)
	{
	    if (a[i]!=b[j])
	    {
		    flag=4;
	    }
	}
	    if (flag==4)
	    {
	    	cout<<"not a palentrom array.";
		}
		else
		{
			cout<<"palentrom array.";
		}
}
