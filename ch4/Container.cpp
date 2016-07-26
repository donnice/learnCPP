#include<iostream>
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

int main()
{
	Entry ee = {"shit",1234};
	return 0;
}
