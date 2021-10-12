#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[100];
	FILE *fp;
	fp=fopen ("hello.txt","w");
	cout<<"Write your file here."<<"\n";
	while (strlen(gets(a))>0)
	{
		fputs(a,fp);
		fputs("\n",fp);
	}
}
