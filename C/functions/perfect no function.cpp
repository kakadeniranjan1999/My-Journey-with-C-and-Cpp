#include<iostream>
using namespace std;
char perf(int n)
{
	int i=1,sum=0;
	char c;
	while (i<n)
	{
		if (n%i==0)
		{
			cout<<i<<"\n";
			sum=sum+i;
		}
		i++;
	}
	return c=sum==n ? 1:0;
}
main()
{
	int n;
	char c;
	cout<<"enter a no:";
	cin>>n;
	c=perf(n);
	printf(c==1 ? "perfect":"not perfect");
	
}
