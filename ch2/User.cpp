// User.cpp page 67

#include "Vector.h"
#include <cmath>
#include <iostream>
#include <stdexcept>
#include <type_traits>

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
	catch(out_of_range)
	{
		cout << "Out of range!" << endl;
	}
}

void test()
{
	static_assert(4<=sizeof(int),"Integers are too small!");

	try
	{
		Vector v(-27);
	}
	catch(length_error)
	{
		cout << "There is length error!!"<< endl;
	}
}

int main()
{
	Vector v(5);
//	for(int i = 0; i!=v.size();i++)
//		v.elem[i] = i;
	v.init();
	cout << sqrt_sum(v) << endl;
	f(v);
	test();
	return 0;
}
