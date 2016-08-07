// page 136
#include <iostream>
#include <future>		// async
#include <chrono>		// milliseconds

using namespace std;

// nable a transfer of a value between two tasks without explicit use of a lock


bool is_prime(int x)
{
	for(int i = 2; i < x; ++i)
		if(x%i == 0) return false;
	return true;
}

int main()
{
	future<bool> fut = async(is_prime,44444444443);

	cout << "Checking, please wait.";
	chrono::milliseconds span(5000);
	while(fut.wait_for(span) == future_status::timeout)
		cout << "." << flush;
	
	bool x = fut.get();

	cout << "\n44444444443 " << (x?"is":"is not") << " prime.\n";
	
	return 0;
}
