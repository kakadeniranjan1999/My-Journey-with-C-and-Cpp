#include<iostream>
using namespace std;
main()
{
	int x[10],i,p,n,j;
	cout<<"How many digit number:";
	cin>>p;
	cout<<"Enter the number:";
	cin>>n;
	for (i=0;i<p,n>0;i++)
	{
		x[i]=n%10;
    	n=n/10;
    }
    for (i=(p-1);i>=0;i--)
	{
		j=x[i];
		switch (j)
		{
			
			case 0:cout<<"zero ";
			break;
			case 1 :cout<<"one ";
			break;
			case 2 :cout<<"two ";
			break;
			case 3 :cout<<"three ";
			break;
			case 4 :cout<<"four ";
			break;
			case 5 :cout<<"five ";
			break;
			case 6 :cout<<"six ";
			break;
			case 7 :cout<<"seven ";
			break;
			case 8 :cout<<"eight ";
			break;
			case 9 :cout<<"nine ";
		}
	}
}
