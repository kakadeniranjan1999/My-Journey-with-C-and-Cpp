#include<iostream>
using namespace std;
main()
{
	char name[10],p[10];
	int i,len=0;
	cin>>name;
	for (i=0;name[i]!='\0';i++,len++);
	for (i=1;i<len;i++)
	{
		if (name[i-1]==name[i])
		cout<<name[i];
    }
}
