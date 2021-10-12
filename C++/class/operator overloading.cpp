#include<iostream>
using namespace std;
class demo
{
	int x;
	public:
		demo (int x=0)
		{
			this->x=x;
		}
		disp()
		{
			cout<<x;
		}
		operator ++()
		{
			x++;
		}
};
main()
{
	demo a(4),b(5),c;
	a.disp();
	a++;
	a.disp();
	b++;
	b.disp();
}
