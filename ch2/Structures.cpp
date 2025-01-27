#include <iostream>
using namespace std;

struct Vector{
	int sz;				// number of elements
	double* elem;		// pointer to elements
};

void vector_init(Vector& v, int s)
{
	v.elem = new double[s];		// allocate an array of doubles
	v.sz = s;
}
// The & in Vector& indicates that we pass v by non-const reference; that way, vector_init() can modify the vector passed to it.

double read_and_sum(int s)
{
	Vector v;
	vector_init(v,s);
	for(int i = 0; i<s;++i)
		cin >> v.elem[i];
	
	double sum = 0;
	for(int i = 0; i<s; i++)
		sum += v.elem[i];
	return sum;
}

int main()
{
	int s = 10;
	Vector vec;
	vector_init(vec,s);
	double sum = read_and_sum(s);
	cout << sum << endl;

	return 0;
}
