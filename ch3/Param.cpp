#include <iostream>
#include <string>
#include <list>
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

int main()
{
	Vector<char> vc(200);
	Vector<string> vs(17);
	Vector<std::list<int> > vli(45);

	return 0;
}
