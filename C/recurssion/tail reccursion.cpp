#include<iostream>
using namespace std;
fun(int x)
{
	int s;
	if (x==1)
	{
		return x;
	}
	s=x+fun(x-1);
	return s;
}
main()
{
	int a;
	cin>>a;
	int k=fun(a);
	cout<<k;
}
