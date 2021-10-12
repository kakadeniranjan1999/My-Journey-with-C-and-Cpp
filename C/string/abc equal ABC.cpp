#include<iostream>
using namespace std;
main()
{
	char ch,a[10];
	int len,i;
	cin>>a;
	for (i=0;a[i]!='\0';i++,len++);
	for (i=0;i<len;i++)
	{
	ch=(a[i]-32);
	cout<<ch;
    }
}
