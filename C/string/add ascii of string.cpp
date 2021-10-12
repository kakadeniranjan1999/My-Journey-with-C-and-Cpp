#include<iostream>
using namespace std;
main()
{
	char name[10],p[10];
	int i,len=0,sum=0;
	cin>>name;
	for (i=0;name[i]!='\0';i++,len++);
	for (i=0;i<len;i++)
	{
	   sum=sum+name[i];
    }
	cout<<sum;
	
}
