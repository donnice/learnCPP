#include<iostream>
using namespace std;

class Vector
{
private:
	double *elem;
	int sz;
public:
	Vector(int s)						// initialize elements
	{
		elem = new double[s];
		sz = s;
		for(int i = 0; i<s;++i)
			elem[i]=0;
	}

	~Vector()							// destructor
	{
		delete[] elem;
	}

	double& operator[](int i);

	void push_back(double d);
}
