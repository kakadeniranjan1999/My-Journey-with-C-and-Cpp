#include<iostream>
using namespace std;
main()
{
	int i=1,sum=0,n;
	cout<<"enter n:";
    cin>>n;
	while (i<=n)
	{
	    sum=sum+i;
	    i++;
    }
    cout<<sum;
}
