#include<string>
#include<iostream>

using namespace std;

string compose(const string& name, const string& domain)
{
	return name+'@'+domain;
}

void m2(string& s1, string& s2)
{
	s1 = s1+'\n';	// append newline
	s2 += '\n';
}

string name = "Niels Stroustrup";

void m3()
{
	string s = name.substr(6,10);
	name.replace(0,5,"nicolas");
	name[0] = toupper(name[0]);
}

string incantation;

void respond(const string& answer)
{
	if(answer == incantation)
	{

	}
	else if(answer == "yes")
	{

	}
}

int main()
{
	m3();
	return 0;
}
