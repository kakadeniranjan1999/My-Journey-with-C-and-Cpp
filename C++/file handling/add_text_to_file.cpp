#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream out("data.txt");
	if (out.is_open())
	{
		out<<"Hello world";
    }
    out.close();
}
