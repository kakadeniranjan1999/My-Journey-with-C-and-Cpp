#include<iostream>
using namespace std;
main()
{
	int i=2,n,flag;
	cout<<"Enter a no:";
	cin>>n;
	while (i<n)
	{
		if (n%i==0)
		{
			flag=1;
			cout<<"not a prime.";
		}
		i++;
	}
	if (flag!=1)
	{
		cout<<"prime.";
	}
}
