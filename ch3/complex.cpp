#include <iostream>

using namespace std;

class complex
{
	double re,im;		// representation: two doubles
public:
	complex(double r, double i)
	{
		re = r;
		im = i;
	}
	complex(double r){re = r;im = 0;}
	complex(){re = 0;im = 0;}

	double real() const{return re;}
	void real(double d){re=d;}
	double imag() const{return im;}
	void imag(double d){im=d;}

	complex& operator+=(complex z)
	{
		re+=z.re;
		im+=z.im;

		return *this;
	}

	complex& operator-=(complex z)
	{
		re-=z.re;
		im-=z.im;

		return *this;
	}

	complex& operator*=(complex z);		// defined out-of-class
	complex& operator/=(complex z);		// defined out-of-class
};

complex operator+(complex a, complex b)
{
	return a+=b;
}

//int main()
//{
//	complex z1(2.0,1.0);
//	complex z2(3.0,4.0);
//	complex z3 = z1 + z2;
//	cout << z3.real() << " "<<z3.imag() << endl;
//	return 0;
//}
