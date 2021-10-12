#include<iostream>
using namespace std;
class atm
{
	int id,i,p,a[3],s,b,c,x,flag,v;
	public:
	    atm()
	    {
	        cout<<"Enter your ID:";
	       	cin>>id;
	       	cout<<"Enter your pin:";
	       	cin>>a[id];
	       	v=check();
	       	if (v==0)
	       	{
	       		cout<<"Please try another transaction\n";
            }
            else
            {
            	do
	           	{
	               	cout<<"Enter your choice\n1) Deposit\n2) Withdrawal\n3) Check balance\n";
            	    cin>>c;
	               	switch (c)
	               	{
	       	        	case 1: deposit();
	       	        	break;
        	        	case 2: withdraw();
	                	break;
	       	        	case 3: balcheck();
	           	    	break;
	           	    	default: cout<<"Invalid!!!\n";
			        }
		        }
		   	    while (c>=1 && c<=3);
			}
		}
        int check()
        {
          	cout<<"Enter your ID:";
	       	cin>>x;
	       	cout<<"Enter your pin:";
	       	cin>>p;
	        if(p==a[id] && x==id)
			{
				cout<<"correct\n";
			}
			else
			{
				cout<<"incorrect!!\n";
				flag=0;
				return flag;
			}	
		}
		deposit()
		{
			cout<<"Enter your current balance:";
			cin>>b;
			cout<<"Enter amount:";
			cin>>s;
			if((b-s)<=10000)
			{
				b=b+s;
				cout<<"Your balance is:"<<b<<"\n";
			}
			else
			{
				cout<<"Please enter amount less than 10000\n";
			}
		}
		withdraw()
		{
			cout<<"Enter your current balance:";
			cin>>b;
			cout<<"Enter amount:";
			cin>>s;
			if((b-s)>=500)
			{
				b=b-s;
				cout<<"Your balance is:"<<b<<"\n";
			}
			else
			{
				cout<<"Please enter reliable value\n";
			}
		}
		balcheck()
		{
			cout<<"Your balance is:"<<b<<"\n";
		}
};
main()
{
	atm a[3];
}
