#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <list>
// page 117
using namespace std;

struct Entry
{
	string name;
	int age;
};

bool operator<(const Entry& x, const Entry& y)
{
	return x.name < y.name;
}

bool operator == (const Entry& x, const Entry& y)
{
	return x.name == y.name;
}

void f(vector<int>& vec, list<int>& lst)
{
	sort(vec.begin(),vec.end());
	unique_copy(vec.begin(),vec.end(),lst.begin());
}

list<Entry> f(vector<Entry>& vec)
{
	list<Entry> res;
	sort(vec.begin(),vec.end());
	unique_copy(vec.begin(),vec.end(),back_inserter(res));	
	// append to res
	return res;
}

int main()
{
	return 0;
}
