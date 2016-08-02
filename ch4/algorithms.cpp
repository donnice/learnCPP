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

bool has_c(const string& s, char c)
{
	auto p = find(s.begin(),s.end(),c);
//	cout << p << endl;
	if(p!=s.end())
		return true;
	else
		return false;
}

bool new_has_c(const string& s, char c)
{
	return find(s.begin(),s.end(),c)!=s.end();
}

vector<string::iterator> find_all(string& s, char c)
{
	vector<string::iterator> res;
	for(auto p = s.begin();p!=s.end();++p)
		if(*p==c)
			res.push_back(p);
	return res;
}

void test()
{
	string m =  "Shujie is studying iat GaTech";
	for(auto p:find_all(m,'a'))
		if(*p!='z')
			cerr << "a bug!" << *p << "\n";
	cout << find_all(m,'a').size() << endl;
}

template<typename C, typename V>
vector<typename C::iterator> find_all_new(C&c, V v)
{
	vector<typename C::iterator> res;

	return res;
}

int main()
{
	string s = "Michael Bloomberg";
	//cout << s.begin() << "," << s.end() << endl;
	cout << has_c(s,'z') << endl;
	test();
	return 0;
}
