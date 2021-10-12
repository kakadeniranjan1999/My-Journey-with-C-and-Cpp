#include<iostream>
using namespace std;
main()
{
	int a,b,c,r,t;
	float p;
	cout<<"Enter your roll no:";
	cin>>r;
	cout<<"Enter your m1 marks out of 100:";
	cin>>a;
	cout<<"Enter your m2 marks out of 100:";
	cin>>b;
	cout<<"Enter your m3 marks out of 100:";
	cin>>c;
	cout<<"Your roll no is:"<<r<<"\n";
	if (a<35 || b<35 || c<35)
	{
		cout<<"You are FAIL"<<"\n";
    }
    else
	{
		cout<<"You are PASS"<<"\n";
		t=a+b+c;
		cout<<"Your total is:"<<t<<"\n";
		p=(float) t/3;
		cout<<"Your perc is:"<<p<<"\n";	
	
	if (p>=90)
	{
		cout<<"Your grade is A";
	}
	else if (75<=p>90)
	{
		cout<<"Your grade is B";
	}
	else if (p<75)
	{
		cout<<"Your grade is C";
	}
    }	
}
