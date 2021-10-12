#include<iostream>
using namespace std;
main()
{
	int a,*p;
	cin>>a;
	p=&a;
	cout<<&a<<"\n";
	cout<<a<<"\n";
	cout<<*p<<"\n";
	cout<<p<<"\n";
	cout<<&p<<"\n";
}
