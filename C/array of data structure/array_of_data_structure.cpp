#include<iostream>
using namespace std;
struct stud
{
	int roll,m1,m2,m3,t;
	float p;
	char nm[50];
};
main()
{
	stud s[10];
	int i,n;
	cout<<"how many entries:";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cout<<"roll"<<"\n";
		cin>>s[i].roll;
		cout<<"name"<<"\n";
		cin>>s[i].nm;
		cout<<"m1"<<"\n";
		cin>>s[i].m1;
		cout<<"m2"<<"\n";
		cin>>s[i].m2;
		cout<<"m3"<<"\n";
		cin>>s[i].m3;
		s[i].t=s[i].m1+s[i].m2+s[i].m3;
		s[i].p= (float) s[i].t/3;
	}
	cout<<"roll"<<"\t"<<"name"<<"\t"<<"Total"<<"\t"<<"Percentage"<<"\t"<<"\n";
	for (i=0;i<n;i++)
	{
		cout<<s[i].roll<<"\t"<<s[i].nm<<"\t"<<s[i].t<<"\t"<<s[i].p<<"\t"<<"\n";
	}
}
