// Modularity page 
#include<iostream>
using namespace std;

class Vector
{
public:
	Vector(int s);
	double& operator[](int i);
	void init();
	int size();
private:
	double* elem;				// elem points to an array of sz doubles
	int sz;
};
