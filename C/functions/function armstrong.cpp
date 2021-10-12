#include<iostream>
using namespace std;
    int r,n,rev=0,cpy;
arm()
{
	cout<<"enter a no:";
	cin>>n;
	cpy=n;
	while (n>0)
	{
		r=n%10;
	    rev=rev+(r*r*r);
    	n=n/10;
	}
}
main()
{
	arm();
	printf(rev==cpy ? "armstrong":"not armstrong no");
}
