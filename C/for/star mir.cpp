#include<iostream>
using namespace std;
main()
{
	int i,j,n,k;
	cout<<"enter a number:";
	cin>>n;
	for (i=0;i<n;i++)
	{
	    for (j=1;j<(n-i);j++)
	    {
		   cout<<"  ";
	    
		}
		for (k=0;k<=i;k++)
		{
			cout<<" *";
		}
		cout<<"\n";
    }
}
