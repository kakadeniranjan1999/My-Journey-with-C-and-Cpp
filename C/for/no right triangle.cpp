#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cin>>n;
	for (i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			i++;
			cout<<" "<<i;
		}
		cout<<"\n";
	}
}
