#include<iostream>
#include<list>
#include<vector>
// page 112

using namespace std;

struct Entry
{
	string name;
	int number;
};

vector<Entry> phone_book = {
	{"Yuxiu Gu",123456},
	{"Yusheng Wang",234567},
	{"Michael Bloomberg",345678}
};

void print_book(const vector<Entry>& book)
{
	for(int i = 0; i!=book.size();++i)
		cout << book[i] << endl;
}

void print_book_2(const vector<Entry>& book)
{
	for(const auto& x:book)
		cout << x << endl;
}

void input()
{
	for(Entry e; cin>>e;)
		phone_book.push(e);
}

vector<Entry> book2 = phone_book;

list<Entry> phone_book2 = {
	{"David", 123456},
	{"Don",1234567},
	{"Dios",122345}
};

int get_number(const string& s)
{
	for(auto p=phone_book2.begin();p!=phone_book2.end();++p)
		if(p->name==s)
			return p->number;
	return 0;
}

int main()
{
	Entry ee = {"shit",1234};
	return 0;
}
