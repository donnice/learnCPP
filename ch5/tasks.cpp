#include <iostream>
#include <thread>
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

int main()
{
	user();
	return 0;
}
