#include<iostream>
using namespace std;
main()
{
	FILE *fp;
	fp=fopen ("hello.txt","r");
	if (fp!=NULL)
	{
		cout<<"File Found";
	}
	else
	{
		cout<<"File not found";
	}
}
