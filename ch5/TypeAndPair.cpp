#include <iostream>
#include <type_traits>
// page 142:pair
using namespace std;

int main()
{
	cout << boolalpha << endl;
	cout << "int:" << is_arithmetic<int>() << endl;
	cout << "int const:" << is_arithmetic<int const>::value << '\n';

	
	return 0;
}
