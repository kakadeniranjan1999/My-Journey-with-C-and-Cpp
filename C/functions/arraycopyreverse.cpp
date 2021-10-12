#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int n,i,j,*a,*b;
	cin>>n;
	a= (int*) malloc (sizeof(n)*n);
	for (i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	b= (int*) malloc (sizeof(n)*n);
	for (i=0,j=(n-1);i<n,j>=0;i++,j--)
	{
		*(b+j)=*(a+i);
	}
	for (j=0;j<n;j++)
	{
		cout<<*(b+j)<<"\n";
	}
}
