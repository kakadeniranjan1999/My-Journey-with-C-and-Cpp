#include<iostream>
using namespace std;
class demo
{
	int x;
	public:
		accept()
		{
			cout<<"Enter a number:";
			cin>>x;
		}
		friend display(demo X);
};
display(demo X)
{
	cout<<"x is:"<<x;
}
main()
{
	demo d;
	d.accept();
	display(d);
}
