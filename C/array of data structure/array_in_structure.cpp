#include<iostream>
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
	cout<<"roll"<<"\t"<<"name"<<"\t"<<"Total"<<"\t"<<"Percentage"<<"\t"<<"\n";
	for (i=0;i<n;i++)
	{
		cout<<s[i].roll<<"\t"<<s[i].nm<<"\t"<<s[i].t<<"\t"<<s[i].p<<"\t"<<"\n";
	}
}
