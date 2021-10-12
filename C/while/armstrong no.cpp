#include<iostream>
using namespace std;
main()
{
	int r,n,rev=0,cpy;
	cout<<"enter a no:";
	cin>>n;
	cpy=n;
	while (n>0)
	{
		r=n%10;
	    rev=rev+(r*r*r);
    	n=n/10;
	}
	if (rev!=cpy)
	{
		cout<<"not armstrong no";
	}
	else 
	{
		cout<<"armstrong no";
	}
}
