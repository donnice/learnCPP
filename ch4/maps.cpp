#include <map>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

map<string,int> phone_book;
unordered_map<string, int> new_phone_book;

int get_number(const string& s)
{
	return phone_book[s];
}

int get_new_number(const string& s)
{
	return new_phone_book[s];
}

int main()
{
	new_phone_book.insert(pair<string,int>("AAAA",120));
	new_phone_book.insert(pair<string,int>("BBBB",140));
	new_phone_book.insert(pair<string,int>("CCCC",160));
	
	cout << get_new_number("AAAA") << endl;
	
	return 0;
}
