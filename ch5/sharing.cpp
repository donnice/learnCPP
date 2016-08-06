#include <iostream>
#include <thread>
#include <string>
#include <mutex>
// page 133
// synchronized
using namespace std;

mutex m;
int sh;

void f()
{
	unique_lock<mutex> lck = m;
	sh += 7;
}

class Record
{
public:
	mutex rm;
	// ...
};

void 

