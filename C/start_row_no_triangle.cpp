#include<iostream>
using namespace std;
main()
{
	int i,j,k,n,l;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for (k=l;k<=i;k++)
		{
			cout<<" "<<k;
		}
		cout<<"\n";
	}
}
