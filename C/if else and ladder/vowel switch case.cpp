#include<iostream>
using namespace std;
main()
{
	char ch;
	cout<<"please enter alphabet:";
	cin>>ch;
	if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		switch (ch)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"vowel";
		break;
		default : cout<<"consonant";
	    }
	}
	else
	{
		cout<<"please enter alphabet";
	}
}

