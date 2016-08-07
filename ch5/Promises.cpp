#include <iostream>
#include <functional>	// std::ref
#include <thread>		
#include <future>

using namespace std;

// setValue->promise->future->for public use

void print_int(future<int>& fut)
{
	int x = fut.get();
	cout << "Value: " << x << '\n';
}

int main()
{
	promise<int> prom;

	future<int> fut = prom.get_future();

	thread th1(print_int,ref(fut));			// send future to new thread
	
	prom.set_value(10);

	th1.join();
}
