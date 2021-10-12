#include<iostream>
using namespace std;
main()
{
	int i=1,n,sum=0;
	cout<<"enter a no:";
	cin>>n;
	while (i<n)
	{
		if (n%i==0)
		{
			cout<<i<<"\n";
			sum=sum+i;
		}
		i++;
	}
	if (sum==n)
			{
				cout<<"perfect";
			}
			else
			{
				cout<<"not perfect";
			}
}
