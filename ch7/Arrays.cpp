#include <iostream>
#include <vector>

using namespace std;

void f()
{
	int aa[10];
	aa[6] = 9;
	int x = aa[99];
	cout << x << endl;
}

void f(int n)
{
//	int v1[n];	// error: array size not constant expression
//	cout << v1.size() << endl;
	vector<int> v2(n);
	int a2[20];
	int* p = new int[40];
	int v1[] = {1,2,3,4};
	int* p1 = v1;
	for(int i = 0; i < 4; i++)
	{
		cout << *(p1+i) << endl;
	}
	
	bool out = (sizeof("Bohr") == 5);

	cout << out << endl;
}

int main()
{	
//	f();
	f(2);
	return 0;
}
