#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int num=0,l=1,wrd=1,vwl=0,chh=0,con=0;
	char ch;
	FILE *fp;
	fp=fopen ("hello.txt","r");
	while(ch!=EOF)
	{
		ch=fgetc(fp);
		if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
		{
			chh++;
		}
		if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		{
			vwl++;
		}
		else if (ch!='a' || ch!='e' || ch!='i' || ch!='o' || ch!='u')
		{
			con++;
		}
		if (ch==' ')
		{
			wrd++;
		}
		if (ch=='\n')
		{
			wrd++;
			l++;
		}
		if (ch>=48 && ch<=57)
		{
			num++;
		}
	}
	cout<<"number:"<<num<<"\n"<<"line:"<<l<<"\n"<<"words:"<<wrd<<"\n"<<"consonant:"<<con<<"\n";
	cout<<"vowels:"<<vwl<<"\n";
}
