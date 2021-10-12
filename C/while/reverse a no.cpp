#include<iostream>
using namespace std;
main()
{
	int r,n,rev=0;
	cout<<"enter a no:";
	cin>>n;
	while (n>0)
	{
		r=n%10;
	    rev=rev*10+r;
    	n=n/10;
	}
	cout<<rev;
}
