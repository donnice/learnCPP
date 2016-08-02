#include <iostream>
#include <string>
// page 122
using namespace std;

ostream_iterator<string> oo = cout;

int main()
{
	*oo = "Hello,";		// meaning cout << "Hello!"
	++oo;
	*oo = "World!\n";	// meaing cout << "World!\n"

	return 0;
}
