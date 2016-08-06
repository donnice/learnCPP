#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

// mutex is a lockable object

mutex mtx;

void print_block(int n, char c)
{
	mtx.lock();
	for(int i = 0; i < n; i++)
		cout << c;
	cout << '\n';
	mtx.unlock();
}

int main()
{
	thread th1(print_block,50,'*');
	thread th2(print_block,50,'a');

	th1.join();
	th2.join();

	return 0;
}
