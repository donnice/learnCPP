#include<iostream>
#include<string>
// page 109
using namespace std;

struct Entry
{
	string name;
	int number;
};

ostream& operator<<(ostream& os, const Entry& e)
{
	return os << "{\"" << e.name << "\"," << e.number << "}";
}

istream& operator>>(istream& is, Entry& e)
{
	char c, c2;
	if(is>>c && c=='{' && is>>c2 && c2=='"')	// start with a {"
	{
		string name;
		while(is.get(c) && c!='"')
			name+=c;

		if(is>>c && c==',')
		{
			int number = 0;
			if(is >> number >> c && c=='}') 	// read the number and a }
			{
				e.name = name;
				e.number = number;
				return is;
			}
		}
	}
	is.setf(ios_base::failbit);		// register the failure in the stream
	return is;
}

void f() {cout << 10 << endl;}

void h2(int i)
{
	cout << "the value of i is " << i <<'\n';
}

void k()
{
	int b = 'b';
	char c = 'c';
	cout << 'a' << b << c << endl;
}

void f1()
{
	int i;
	cin >> i;

	double d;
	cin >> d;
}

void hello()
{
	cout << "Please enter your name\n";
	string str;
	cin >> str;
	cout << "Hello,"<< str <<"!\n";
}

int main()
{
	for(Entry ee;cin>>ee;)
		cout << ee << '\n';
	return 0;
}
