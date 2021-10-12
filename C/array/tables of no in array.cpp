#include<iostream>
using namespace std;
main()
{
	int a[10],n,j,k,i;
	cout<<"How many enteries :";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (i=0;i<n;i++)
	{
		for (j=1;j<=10;j++)
		{
	
		    k=j*a[i];
	    	cout<<k<<" ";
        }
        cout<<"\n";
	}
}
