#include<iostream>
using namespace std;
display(int x)
{
	if (x>0)
	{
		cout<<"hello world";
		x--;
		display(x);
	}	
}
main()
{
	int x;
	cin>>x;
	display(x);
}
