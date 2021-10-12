#include<iostream>
using namespace std;
main()
{
	int r,n,a=1,cpy,b=0;
	cout<<"enter a no:";
	cin>>n;
	cpy=n;
	while (n>0)
	{
		r=n%10;
		a=1;
		while (r>0)
		{
			a=a*r;
			r--;
		}
		b=b+a;
    	n=n/10;
	}
	if (b==cpy)
	{
		cout<<"strong no";
	}
	else 
	{
		cout<<"not a strong no";
	}
}
