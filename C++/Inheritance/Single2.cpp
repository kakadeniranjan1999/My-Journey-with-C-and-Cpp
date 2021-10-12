#include<iostream>
using namespace std;
class A
{
	public :
    	int x=100;
};
class B : public A
{
	public:
    	void disp()
	{
		int x=200;
		cout<<x;
	}
};
main()
{
	B b;
	b.disp();
}
