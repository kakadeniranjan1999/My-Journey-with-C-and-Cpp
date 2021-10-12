#include<iostream>
using namespace std;
main()
{
	int i=1,n,fact=1;
	cout<<"Enter n:";
	cin>>n;
	while (i<=n)
	{
		fact=fact*i;
		i++;
	}
	cout<<fact;
}

