#include <iostream>
#include <string>
// page 188

using namespace std;

void f(int* pi)
{
	void* pv = pi;
	// *pv;			cannot deference void*
	int* pv2 = pi;
	*pv2;			// test
}

void f2()
{
	char v[] = "Annemarie";
	char* p = v;				// implicit conversion of char[] to char*
	cout << strlen(p) << endl;
	cout << strlen(v) << endl;	// implicit conversion of char[] to char*
}

void fi()
{
	int v1[10];
	int v2[10];

	int i1 = &v1[5]-&v1[3];	// i1 = 2
	int i2 = &v1[5]-&v2[3];
}

int main()
{
	int* pi = nullptr;
	int v[] = {1,2,3,4};
	int* p1 = v;
	int* p2 = &v[0];
	// p1 and p2 point at the same v[0]
	int* p3 = v+4;
	
	cout << "P2:" << *p2 << endl;

	f2();
	fi();

	return 0;
}
