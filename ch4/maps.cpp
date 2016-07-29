#include <map>
#include <iostream>
#include <string>
using namespace std;

map<string,int> phone_book;

int get_number(const string& s)
{
	return phone_book[s];
}

int main()
{
	phone_book.insert(pair<string,int>("AAAA",120));
	phone_book.insert(pair<string,int>("BBBB",140));
	phone_book.insert(pair<string,int>("CCCC",160));
	
	cout << get_number("AAAA") << endl;
	
	return 0;
}
