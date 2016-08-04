#include <iostream>
#include <memory>

void f(int i, int j)
{
	X* p = new X;
	unique_ptr<X> sp {new X};

	p->do_something();
	sp->do_something();

	delete p;
	// sp will be automatically deleted
}

void user(const string& name, ios_base::openmode mode)
{
	shared_ptr<fstream> fp = new fstream(name.mode);
	if(!*fp) throw No_file{};

	f(fp);
	g(fp);
	// shared_ptr share ownership of an object
	// and object is destroyed when the last of its
	// shared_ptr is destroyed
}
