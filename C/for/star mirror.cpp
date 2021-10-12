#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cin>>n;
	for (i=n;i>=1;i--)
	{
		for (j=n;j>=i;j--)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
		
}
