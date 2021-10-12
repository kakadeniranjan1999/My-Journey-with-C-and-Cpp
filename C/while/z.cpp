#include<iostream>
using namespace std;
main()
{
	int i=1,n=1,sum=0;
	while (n<=10) 
	{
	    while (i<n)
	    {
		   if (n%i==0)
		   {
			sum=sum+i;
		   }
		 i++;
	    }
	    if (sum==n)
	    {
	    	cout<<n<<"\n";
		}
	    n++;
    }
}
