#include<iostream>
using namespace std;
struct stud
{
	int roll,m1,m2,m3,t;
	float p;
};
main()
{
	stud s;
	cout<<"enter roll no:";
	cin>>s.roll;
	cout<<"enter m1 marks";
	cin>>s.m1;
	cout<<"enter m2 marks";
	cin>>s.m2;
	cout<<"enter m3 marks";
	cin>>s.m3;
	s.t=s.m1+s.m2+s.m3;
	cout<<s.t<<"\n";
	s.p=(float) s.t/3;
	cout<<s.p<<"\n";
}
