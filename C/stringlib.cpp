#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int len;
	char a[10],b[10],c[10];
	cin>>a>>b>>c;
	len=strlen(a);
    cout<<len<<"\n";
    if (strcmp(a,b)!=0)
    {
    	cout<<"not equal"<<"\n";
	}
	else
	{
		cout<<"equal"<<"\n";
	}
    strcpy(a,b);
    cout<<b<<"\n";
    strrev(a);
    cout<<a<<"\n";
	strcat(a,b);
	cout<<a<<"\n";
	strlwr(c);
    cout<<c<<"\n";
    strupr(b);
    cout<<b<<"\n";
}

