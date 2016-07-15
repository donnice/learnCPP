// page 89
#include<iostream>
#include "complex.cpp"
#include "container.cpp"

using namespace std;

void test(complex z1)
{
	complex z2 = z1;
	complex z3;
	z3 = z2;
}

Vector::Vector(const Vector& a)
{
	this->elem = new double[sz];
	this->sz = a.sz;
	for(int i = 0;i!=sz;i++)
		elem[i] = a.elem[i];
}

Vector& Vector::operator=(const Vector& a)
{
	double* p = new double[a.sz];
	for(int i = 0; i!=a.sz;++i)
		p[i]=a.elem[i];
	delete[] elem;
	elem = pl
	sz = a.sz;
	return *this;
}

int main()
{
	return 0;
}
