#include <iostream>
// page 188

using namespace std;

void f(int* pi)
{
	void* pv = pi;
	// *pv;			cannot deference void*
	int* pv2 = pi;
	*pv2;			// test
}

int main()
{
	int* pi = nullptr;
	return 0;
}
