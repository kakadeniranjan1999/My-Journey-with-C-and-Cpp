#include<iostream>
using namespace std;
main()
{
	int a=0,b=1,fib=0,n;
	cin>>n;
	cout<<a<<"\n"<<b<<"\n";
	for (a=0,b=1;fib<n;a=b,b=fib)
	{
		fib=a+b;
		if (fib<=n)
		{
			cout<<fib<<"\n";
		}
	}
}
