#include<iostream>
using namespace std;
int facto(int n)
{
	int i=1,fact=1;
	while (i<=n)
	{
		fact=fact*i;
		i++;
	}
	cout<<fact; 
	return fact;
}
main()
{
	int n,fact;
	cout<<"Enter n:";
	cin>>n;
	fact=facto(n);
}

