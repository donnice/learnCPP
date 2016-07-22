#include <iostream>
#include <string>
#include <list>
#include <complex>
#include <vector>
#include <iterator>
using namespace std;
// page 92
// The template<typename T> prefix makes T a parameter of the declaration it prefixes

template<typename T>
class Vector
{
private:
	T* elem;
	int sz;
public:
	Vector(int s);
	~Vector(){delete[]elem;}

	// copy and move
	
	T& operator[](int i);
	const T& operator[](int i) const;
	int size() const{return sz;}
	// T* begin(Vector<T>& x);
	// T* end(Vector<T>& x);
	const T* begin() const {return &elem[0];}
	const T* end() const{return &elem[0]+size();}
};

template<typename T>
Vector<T>::Vector(int s)
{
	if(s<0) throw "Negative!";
	elem = new T[s];
	sz = s;
}

template<typename T>
const T& Vector<T>::operator[](int i) const
{
	if(i<0 || size()<=i)
		throw "Vector::operator[]";
	return elem[i];
}

// template<typename T>
// const T* Vector<T>::begin(Vector<T>& x) const
// {
// 	return &x[0];			// pointer to first element
// }

// template<typename T>
// const T* Vector<T>::end(Vector<T>& x) const
// {
// 	return x.begin()+x.size();
// }


template<typename Container, typename Value>
Value sum(const Container& c, Value v)
{
	for(auto x:c)
		v+=x;
	return v;
}

void user(Vector<int>& vi,list<double>& Id,vector<complex<double> >& vc)
{

}

void f2(const Vector<string>& vs)
{
	for(auto& s:vs)
		cout << s << '\n';
}

int main()
{
	Vector<char> vc(200);
	Vector<string> vs(17);
	Vector<std::list<int> > vli(45);

	return 0;
}
