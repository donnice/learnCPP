#include <iostream>
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

}

int main()
{
	return 0;
}
