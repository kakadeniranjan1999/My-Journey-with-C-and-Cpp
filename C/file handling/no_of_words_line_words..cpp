#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int num=0,l=1,w=1;
	char ch;
	FILE *fp;
	fp=fopen ("hello.txt","r");
	while(ch!=EOF)
	{
		ch=fgetc(fp);
		if (ch==' ')
		{
			w++;
		}
		else if (ch=='\n')
		{
			w++;
			l++;
		}
		else if (ch>=48 && ch<=57)
		{
			num++;
		}
	}
	cout<<num<<"\n"<<l<<"\n"<<w;
}
