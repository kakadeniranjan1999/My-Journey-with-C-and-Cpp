#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"enter a number:";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cout<<"    ";
	    for (j=0;j<i;j++)
	    {
		   cout<<" *";
	    
		}
		cout<<"\n";
    }
    for (i=n;i>0;i--)
	{
		cout<<"    ";
	    for (j=0;j<i;j++)
	    {
		   cout<<" *";
	    
		}
		cout<<"\n";
    }
    for (i=0;i<n+1;i++)
    {
    	cout<<"    ";
    	cout<<" *"<<"\n";
	}
	for (i=0;i<n;i++)
	{
		cout<<" ";
		cout<<" *";
	}
	cout<<"\n";
	for (i=0;i<n+2;i++)
	{
		cout<<" *";
	}
}
