// page 138
#include <iostream>
#include <future>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

template<typename RAIter>
int parallel_sum(RAIter beg, RAIter end)
{
	auto len = end - beg;
	if(len < 1000)
		return accumulate(beg,end,0);
	// Returns the result of accumulating all the values in the range [first,last) to init.
	// default: sum (start, end, initVal, func(can be defualt));

	RAIter mid = beg + len/2;
	auto handle = async(launch::async,
						parallel_sum<RAIter>, mid, end);
	int sum = parallel_sum(beg,mid);
	return sum+handle.get();
}

int main()
{
	vector<int> v(100000,1);
	cout << "The sum is: " << parallel_sum(v.begin(),v.end()) << endl;

	return 0;
}
