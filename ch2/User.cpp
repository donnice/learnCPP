// User.cpp page 67

#include "Vector.h"
#include <cmath>
#include <iostream>

using namespace std;

double sqrt_sum(Vector& v)
{
	double sum = 0;
	for(int i = 0; i!=v.size();++i)
		sum+=sqrt(v[i]);
	return sum;
}

void f(Vector& v)
{
	//
	try
	{
		v[v.size()]=7;
	}
}

int main()
{
	Vector v(5);
//	for(int i = 0; i!=v.size();i++)
//		v.elem[i] = i;
	v.init();
	cout << sqrt_sum(v) << endl;
	return 0;
}
