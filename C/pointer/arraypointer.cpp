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
		cout<<*(a+i);
		cout<<"\t"<<a<<"\t"<<(a+i)<<endl;
	}
}
