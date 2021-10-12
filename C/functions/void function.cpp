#include<iostream>
using namespace std;
int a,b,c;
void add(int a,int b)
{
    c=a+b;
	return c;
}
void main()
{
	cin>>a>>b;
	add(a,b);
	cout<<c;
}
