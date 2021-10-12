#include<iostream>
using namespace std;
main()
{
	int i=1,n;
	cout<<"enter n:";
	cin>>n;
	while (i<n)
	{
		if (n%i==0)
		{
			cout<<i<<"\n";
		}
		i++;
	}
}
