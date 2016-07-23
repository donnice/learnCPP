#include <iostream>
#include <string>
#include <list>
#include <complex>
#include <vector>
#include <iterator>
using namespace std;

// page 95

template<typename T>
class Less_than
{
	const T val;	// value to compare against
public:
	Less_than(const T& v)
	{
		val = v;
	}
	bool operator()(const T& x) const
	{
		return x < val;
	}
};

template<typename C, typename P>
int count(const C& c, P pred)
{
	int cnt = 0;
	for(const auto& x:c)
		if(pred(x))
			++cnt;
	return cnt;
}

template<typename T, typename... Tail>
void f(T head, Tail... tail)
{
	g(head);
	f(tail...);
}

int main()
{
	using size_t = unsigned int;

	Less_than<int> Iti{42};
	Less_than<string> Its{"Backus"};
	return 0;
}
