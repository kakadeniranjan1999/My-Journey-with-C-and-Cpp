#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
main()
{
	char str[100];
	ofstream out("data.txt");
	if (out.is_open())
	{
		cout<<"Write your file here:\n";
		while(strlen(gets(str))>0)
		{
	    	out<<str<<"\n";
		}
    }
    out.close();
}
