#include<iostream>
using namespace std;
int gcd(int n,int m)
{
while (m!=n)
		{
			if (m>n)
				{
					m=m-n;
				}
			else
				{
					n=n-m;
				}
	    }
			return n;
}
main()
{
	int n,l,m;
	cin>>n>>m;
	l=gcd(n,m);
	cout<<l;
}
