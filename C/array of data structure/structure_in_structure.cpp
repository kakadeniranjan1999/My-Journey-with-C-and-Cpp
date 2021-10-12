#include<iostream>
using namespace std;
struct addr
{
	char b[20],c[20],d[20];
};
struct stud
{
	addr e[3];
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
		
		for (j=0;j<3;j++)
		{
	        cout<<"enter addresses"<<"\n";
	        cin>>s[i].e[j].b;
			cin>>s[i].e[j].c;
			cin>>s[i].e[j].d;		 
		}
		
		s[i].t=s[i].a[0]+s[i].a[1]+s[i].a[2];
		s[i].p= (float) s[i].t/3;
	}
	cout<<"roll"<<"\t"<<"name"<<"\t"<<"Total"<<"\t"<<"Percentage"<<"\t"<<"\n";
	for (i=0;i<n;i++)
	{
		cout<<s[i].roll<<"\t"<<s[i].nm<<"\t"<<s[i].t<<"\t"<<s[i].p<<"\t"<<"\n";
	}
	for (j=0;j<3;j++)
		{
			cout<<"enter marks"<<"\n";
			cout<<s[i].e[j].b;
			cin>>s[i].e[j].c;
			cin>>s[i].e[j].d;
		}
	
}
