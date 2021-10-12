#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"enter a number:";
	cin>>n;
	for (i=n;i>0;i--)
	{
	    for (j=0;j<i;j++)
	    {
		   cout<<" *";
	    
		}
		cout<<"\n";
    }
}
