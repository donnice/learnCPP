// page 143
#include <iostream>
#include <cmath>
#include <list>
#include <numeric>
#include <complex>
#include <random>

using namespace std;

void f()
{
	list<double> lst {1,2,3,4,5,999.999};
	auto s = accumulate(lst.begin(),lst.end(),0.0);	// calculate the sum
	cout << s << '\n';
}



int main()
{
	f();
	int x = 0;
	while(x < 1000)
		cout << rand()%1000 << endl;
	return 0;
}
