#include<iostream>
using namespace std;
int pass(int a,int b,int c)
{
	int t,ans;
	float p;
	if (a<35 || b<35 || c<35)
	{
		ans=0;
    }
    else
	{
		ans=1;
	}
	return ans;
}
int total(int a,int b,int c)
{
	int t;
	t=a+b+c;
	return t;
}
float perc(int t)
{
	float p;
p=(float) t/3;
return p;	
}
char grade(float p)
{
	return p<40 ? 'D':p<60 ? 'C':p<70 ? 'B':'A';
}
main()
{
	char d;
	int r,a,b,c,t,ans;
	float p;
	cout<<"Enter your roll no:";
	cin>>r;
	cout<<"Enter your m1 marks out of 100:";
	cin>>a;
	cout<<"Enter your m2 marks out of 100:";
	cin>>b;
	cout<<"Enter your m3 marks out of 100:";
	cin>>c;
	cout<<"Enter your roll no:"<<r<<"\n";
	ans=pass(a,b,c);
	if (ans==0)
	{
		cout<<"Your are FAIL"<<"\n";
	}
	else if (ans==1)
	{
		cout<<"Your are PASS"<<"\n";
		t=total(a,b,c);
		cout<<"Your total is:"<<t<<"\n";
		p=perc(t);
		cout<<"Your perc is:"<<p<<"\n";	
		d=grade(p);
		cout<<"Your grade is "<<d;
	}
}


