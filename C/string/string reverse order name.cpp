#include<iostream>
using namespace std;
main()
{
	char name[10];
	int i,len=0;
	cin>>name;
	for (i=0;name[i]!='\0';i++,len++);
	for (i=(len-1);i>=0;i--)
	{
		cout<<name[i];
	}
}
