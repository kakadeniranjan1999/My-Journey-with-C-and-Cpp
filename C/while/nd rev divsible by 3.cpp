#include<iostream>
using namespace std;
main()
{
	int i,n,sum,d=0;
	cout<<"enter a number";
	cin>>n;
	i=n;
	while (i>0)
	{
		sum=(i+(i-1));
		if (sum%3!=0)
		{
			cout<<sum<<"\n";
			d=d+sum;
		}
		i-2;
	}
	cout<<d<<" is the sum";
}
