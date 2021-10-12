#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
struct stud
{
	int roll,t,a[3];
	float p;
	char nm[50];
};
main()
{
	stud s[10];
	int i,n,j;
	char str[100];
	ofstream out("student data.txt");
	cout<<"how many entries:";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cout<<"roll"<<"\n";
		cin>>s[i].roll;
		cout<<"name"<<"\n";
		cin>>s[i].nm;
		for (j=0;j<3;j++)
		{
			cout<<"enter marks"<<"\n";
			cin>>s[i].a[j];
		}
		s[i].t=s[i].a[0]+s[i].a[1]+s[i].a[2];
		s[i].p= (float) s[i].t/3;
	}
	out<<"roll"<<"\t\t"<<"name"<<"\t\t"<<"Total"<<"\t\t"<<"Percentage"<<"\t\t"<<"\n";
	for (i=0;i<n;i++)
	{
		out<<s[i].roll<<"\t\t"<<s[i].nm<<"\t\t"<<s[i].t<<"\t\t"<<s[i].p<<"\t\t"<<"\n";
	}
    out.close();
}
