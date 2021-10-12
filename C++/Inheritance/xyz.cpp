#include<iostream>
using namespace std;
class stud
{
	public:
		int r,m1,m2,m3,t;
		float p;
		void accept()
		{
			cin>>r>>m1>>m2>>m3;
		}
};
class  op : public stud
{
	public:
	void display()
	{
		t=m1+m2+m3;
    	p=(float) t/3;
		cout<<r<<"\t"<<t<<"\t"<<p<<"\n";
	}
};
main()
{
	int i,n;
	cout<<"how many entries?";
	cin>>n;
	stud a[10];
	op b[10];
	for(i=0;i<n;i++)
	{
		a[i].accept();
	}
	cout<<"roll\t"<<"total\t"<<"percentage\n";
	for(i=0;i<n;i++)
	{
        b[i].display();
	}
}
