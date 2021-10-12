#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char ch;
	FILE *fp;
	fp=fopen ("hello.txt","r");
	while(ch!=EOF)
	{
		ch=fgetc(fp);
		cout<<ch;
	}
	
}
