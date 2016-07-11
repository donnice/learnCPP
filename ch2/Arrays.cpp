#include<iostream>
using namespace std;

void copy_fct()
{
	int v1[10] = {0,1,2,3,4,5,6,7,8,9};
	int v2[10];				// to become a copy
}

void print()
{
	int v[10];
	for(int i = 0; i < 10; i++)
		v[i] = i;

	for(auto x:v)			// for each x in v
		cout << x << '\n';

	for(auto &x:v)
		++x;
	// A reference is similar to a pointer, except that you don’t need to use a prefix ∗ to access the value referred to by the reference
	
	for(auto x:v)           // for each x in v
		cout << x << '\n';
}

int count_x(char*p, char x)
	// count the number of occurences of x in p[]
	// p is assumeed to point to a zero-terminated array
{
	if(p == nullptr) return 0;
	int count = 0;
	for(;*p!=0;++p)
		if(*p==x)
			++count;
	return count;
}

int main()
{
	print();

	return 0;
}

