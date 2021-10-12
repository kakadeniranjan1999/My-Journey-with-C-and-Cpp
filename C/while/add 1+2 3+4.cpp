#include<iostream>
using namespace std;
main()
{
	int i=0,n,sum;
	cout<<"enter a number";
	cin>>n;
	while (i<n)
	{
		i++;
		sum=(i+(i+1));
		if (sum%3!=0)
		{
			cout<<sum<<"\n";
		}
		i++;
	}
}
