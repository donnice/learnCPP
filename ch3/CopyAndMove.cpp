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

void f(const Vector& x, const Vector& y, const Vector& z)
{
	Vector r;
//	r = x+y+z;		// bad thing, because copying is expensive
}

Vector f()
{
	Vector x(1000);
	Vector y(1000);
	Vector z(1000);

	z=x;			// copy
	y=std::move(x);	// move

	return z;		// move
}

int main()
{
	return 0;
}
