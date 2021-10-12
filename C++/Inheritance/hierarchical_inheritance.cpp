#include<iostream>
using namespace std;
class A
{
	public:
		int c,d,a,b;
		void accept()
		{
			cin>>a>>b;
		}	
};
class B: public A
{
	public:
		void add()
		{
			c=a+b;
			cout<<c<<"\n";
		}
};
class C : public A
{
	public:
		void sub()
		{
			d=a-b;
			cout<<d;
		}
};
main()
{
	B b;
	C c;
	b.accept();
	b.add();
	c.accept();
	c.sub();
}

