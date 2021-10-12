#include<iostream>
using namespace std;
main()
{
	int a=0,b=1,fib=0,n;
	cin>>n;
	cout<<a<<"\n"<<b<<"\n";
	while (fib<n)
	{
		fib=a+b;
		if (fib<=n)
		{
			cout<<fib<<"\n";
		}
		a=b;
		b=fib;
	}
	
}
