// In a class definition, the default access for members and base classes is private. In a struct definition, the default is public.

// in C, a struct is just an aggregate collection of (public) data, and has no other class-like features: no methods, no constructor, no base classes, etc.

#include<iostream>
using namespace std;

class Vector
{
private:
	double *elem;			// pointer to the elements
	int sz;					// the number of elements
public:
	Vector(int s)			// constructor of a vector
	{
		elem = new double[s];
		sz = s;

		// elem = new double[s];
		// sz = s;
	}

	double& operator[](int i)
	{
		return elem[i];
	}
	int size(){return sz;}
};

double read_and_sum(int s)
{
	Vector v(s);
	for(int i = 0; i!=v.size();++i)
		v[i] = i;
	
	double sum = 0;
	for(int i = 0; i!=v.size(); ++i)
		sum += v[i];
	return sum;
}

int main()
{
//	double res = read_and
	cout << read_and_sum(5) << endl;
	return 0;
}
