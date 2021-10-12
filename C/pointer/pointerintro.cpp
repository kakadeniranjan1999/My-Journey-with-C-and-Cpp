#include<iostream>
using namespace std;
main()
{
	int a,*p,**q;
	cin>>a;
	p=&a;
	q=&p;
	cout<<&a<<"\n";
	cout<<a<<"\n";
	cout<<*p<<"\n";
	cout<<p<<"\n";
	cout<<&p<<"\n";
	cout<<q<<"\n";
	cout<<*q<<"\n";
	cout<<&q<<"\n";
	cout<<**q<<"\n";
}

