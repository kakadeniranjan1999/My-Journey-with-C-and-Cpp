#include<iostream>
using namespace std;
main()
{
	int y=0,x,i,p,n,j;
	cout<<"How many digit number:";
	cin>>p;
	cout<<"Enter the number:";
	cin>>n;
	for ( ;n>0; )
	{
		x=n%10;
		y=(y*10)+x;
		n=n/10;
	}
	for ( ;y>0; )
	{
		j=y%10;
		switch (j)
		{
			
			case 0 :cout<<"zero ";
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
		y=y/10;
	}
}
