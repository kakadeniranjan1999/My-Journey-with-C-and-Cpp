#include<iostream>
using namespace std;
main()
{
	char ch,a[10];
	int len=0,i;
	cin>>a;
	for (i=0;a[i]!='\0';i++,len++);
	for (i=0;i<len;i++)
	{
        else if (65<=a[i]<=88)
        {
          	a[i]=(a[i]+32);
		}
    }
    cout<<a;
}
