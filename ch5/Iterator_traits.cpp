#include <iostream>
#include <iterator>
#include <typeinfo>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <forward_list>
// page 139
using namespace std;

// iterator_trait allow us to check what kind of 
// iterator is supported

//void test(vector<string>& v,forward_list<int>& lst)
//{
//	sort(v);
//	sort(lst);
//}

template<class BidirIt>
void my_reverse(BidirIt first, BidirIt last)
{
	typename iterator_traits<BidirIt>::difference_type n
		=distance(first,last);
	--n;
	while(n > 0)
	{
		typename iterator_traits<BidirIt>::value_type tmp = *first;
		*first++ = *--last;
		*last = tmp;
		n -= 2;
	}
}

int main()
{
	typedef iterator_traits<int*> traits;
	if(typeid(traits::iterator_category) 
		== typeid(random_access_iterator_tag))
		cout << "int is a random-access iterator" << endl;
	
	vector<int> v{1,2,3,4,5};
	my_reverse(v.begin(),v.end());
	for(int n:v)
		cout << n << ' ';
	cout << endl;

	list<int> l{1,2,3,4,5};
	my_reverse(l.begin(),l.end());
	for(auto n:l)
		cout << n << ' ';
	cout << '\n';

	return 0;
}
