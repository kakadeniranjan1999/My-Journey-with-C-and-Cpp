#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int n,i,*a;
	cin>>n;
	a= (int*) malloc (sizeof(n)*n);
	for (i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	for (i=0;i<n;i++)
	{
		cout<<*(a+i)<<"\n";
	}
	for (i=(n-1);i>=0;i--)
	{
		cout<<*(a+i)<<"\n";
	}
}
