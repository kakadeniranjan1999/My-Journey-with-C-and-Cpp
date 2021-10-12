#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int n,i,*a,*b;
	cin>>n;
	a= (int*) malloc (sizeof(n)*n);
	for (i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	b= (int*) malloc (sizeof(n)*n);
	for (i=0;i<n;i++)
	{
		*(b+i)=*(a+i);
	}
	for (i=0;i<n;i++)
	{
		cout<<*(b+i)<<"\n";
	}
}
