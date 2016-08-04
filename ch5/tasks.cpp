#include <iostream>
#include <thread>
#include <vector>
// page 130
using namespace std;

void f(){cout << "Hello!" << endl;}

struct F
{
	void operator()(){cout << "Parallel World!" << endl;}
};

void user()
{
	thread t1(f);			// f() executes in seperated thread
	thread t2((F()));	// F()() executes in seperate thread

	t1.join();				// wait for t1
	t2.join();				// wait for t2
}

void f2(vector<double>& v);

struct F2
{
	vector<double>& v;
	F2(vector<double>& vv):v(vv){}
	void operator()();
};

class F3
{
private:
	const vector<double>& v;			// source of input
	double* res;						// target for output

public:
	F3(const vector<double>& vv, double* p):v(vv),res(p){}
}

int main()
{
	user();
	return 0;
}
