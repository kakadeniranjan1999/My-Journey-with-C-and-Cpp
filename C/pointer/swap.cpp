#include<iostream>
using namespace std;
swap(int *a,int *b)
{
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}
main()
{
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<"\n"<<b;
}
