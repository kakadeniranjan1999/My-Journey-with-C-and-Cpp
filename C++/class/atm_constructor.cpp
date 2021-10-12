#include<iostream>
using namespace std;
class atm
{
	int id,i,p,a[3];
	public:
	    atm()
	    {
	        	cout<<"Enter your ID:";
	        	cin>>id;
	        	cout<<"Enter your pin:";
	        	cin>>a[id];
	        	check();
        }
        check()
        {
          	cout<<"Enter your ID:";
	       	cin>>id;
	       	cout<<"Enter your pin:";
	       	cin>>p;
	        if(p==a[id])
			{
				cout<<"correct\n";
			}
			else
			{
				cout<<"incorrect!!\n";
			}	
		}
};
main()
{
	int id;
	atm a[3];
}
