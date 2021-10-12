#include<iostream>
using namespace std;
main()
{
	char name[10],p[10];
	int i,j,len=0;
	cin>>name;
	for (i=0;name[i]!='\0';i++,len++);
	for (i=(len-1),j=0;i>=0;i--,j++)
	{
	   p[j]=name[i];
    }
    p[j]='\0';
	cout<<p;
	
}
