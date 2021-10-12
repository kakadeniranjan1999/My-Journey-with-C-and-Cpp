#include<iostream>
using namespace std;
main()
{
	int x[10],y,i,p,n,j,flag;
	cout<<"How many digit number:";
	cin>>p;
	cout<<"Enter the number:";
	cin>>n;
	for (i=0;i<p,n>0;i++)
	{
		x[i]=n%10;
    	n=n/10;
    }
    y=(i-1);
    cout<<y;
    if (y=3)
    {
       for (i=(p-1),flag=0;i>=0,flag<3;i--,flag++)
    	{
		   j=x[i];
           if (flag==0)
	    	{	
	        	switch (j)
	        	{
			
		        	case 0:cout<<"";
		        	break;
		        	case 1 :cout<<"one thousand ";
		        	break;
		        	case 2 :cout<<"two thousand ";
			        break;
	        		case 3 :cout<<"three thousand ";
		        	break;
		        	case 4 :cout<<"four thousand ";
					break;
					case 5 :cout<<"five thousand ";
					break;
					case 6 :cout<<"six thousand ";
					break;
					case 7 :cout<<"seven thousand ";
					break;
					case 8 :cout<<"eight thousand ";
					break;
					case 9 :cout<<"nine thousand ";
				}
			}
	if (flag==1)
		{	
		switch (j)
		{
			
			case 0:cout<<"";
			break;
			case 1 :cout<<"one hundred ";
			break;
			case 2 :cout<<"two hundred ";
			break;
			case 3 :cout<<"three hundred ";
			break;
			case 4 :cout<<"four hundred ";
			break;
			case 5 :cout<<"five hundred ";
			break;
			case 6 :cout<<"six hundred ";
			break;
			case 7 :cout<<"seven hundred ";
			break;
			case 8 :cout<<"eight hundred ";
			break;
			case 9 :cout<<"nine hundred ";
		}
	}
	else if (flag==2)
	{
		switch (j)
		{
			
			case 0:cout<<"";
			break;
			case 1 :cout<<"one ";
			break;
			case 2 :cout<<"twenty ";
			break;
			case 3 :cout<<"thirty ";
			break;
			case 4 :cout<<"fourty ";
			break;
			case 5 :cout<<"fifty ";
			break;
			case 6 :cout<<"sixty ";
			break;
			case 7 :cout<<"seventy ";
			break;
			case 8 :cout<<"eighty ";
			break;
			case 9 :cout<<"ninety ";
		}
	}
	else 
	{
		switch (j)
		{
			
			case 0:cout<<" ";
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
	}
    if (y=2)
    {
    for (i=(p-1),flag=0;i>=0,flag<3;i--,flag++)
	{
		j=x[i];
        if (flag==0)
		{	
		switch (j)
		{
			
			case 0:cout<<"";
			break;
			case 1 :cout<<"one hundred ";
			break;
			case 2 :cout<<"two hundred ";
			break;
			case 3 :cout<<"three hundred ";
			break;
			case 4 :cout<<"four hundred ";
			break;
			case 5 :cout<<"five hundred ";
			break;
			case 6 :cout<<"six hundred ";
			break;
			case 7 :cout<<"seven hundred ";
			break;
			case 8 :cout<<"eight hundred ";
			break;
			case 9 :cout<<"nine hundred ";
		}
	}
	else if (flag==1)
	{
		switch (j)
		{
			
			case 0:cout<<"";
			break;
			case 1 :cout<<"one ";
			break;
			case 2 :cout<<"twenty ";
			break;
			case 3 :cout<<"thirty ";
			break;
			case 4 :cout<<"fourty ";
			break;
			case 5 :cout<<"fifty ";
			break;
			case 6 :cout<<"sixty ";
			break;
			case 7 :cout<<"seventy ";
			break;
			case 8 :cout<<"eighty ";
			break;
			case 9 :cout<<"ninety ";
		}
	}
	else 
	{
		switch (j)
		{
			
			case 0:cout<<" ";
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
	}
}
