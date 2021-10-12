#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string str;
	ifstream in("data.txt");
	if (in.is_open())
	{
		while (getline(in,str))
		{
			cout<<str;
		}
    }
    in.close();
}
