#include<iostream>
using namespace std;
main()
{
	int i;
	for (i=1;i<=50000;i++)
	{
		if (i%1==0 && i%2==0 && i%3==0 && i%4==0 && i%5==0 && i%6==0 && i%7==0 && i%8==0 && i%9==0 && i%10==0)
		{
	    	cout<<i<<"\n";
		}
	}
}
