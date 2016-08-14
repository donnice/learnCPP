#include <type_traits>
#include <iostream>

// page 153

using namespace std;

int main()
{
	cout << "float:" << sizeof(float) << endl;
    cout << "double:" << sizeof(double) << endl;
    cout << "int:" << sizeof(int) << endl;
	cout << "short:" << sizeof(short) << endl;
	cout << "bool:" << sizeof(bool) << endl;
	cout << "char:" << sizeof(char) << endl;
	cout << "signed char:" << sizeof(signed char) << endl;
	// can be both positive and negative -127~127
	cout << "unsigned char:" << sizeof(unsigned char) << endl;
	// guarenteed  to be unsigned 0~255
	cout << "wchar_t:" << sizeof(wchar_t) << endl;
	// Unicode
//	cout << "void:" << sizeof(void) << endl;
//	cout << "auto:" << sizeof(auto) << endl;

	return 0;
}
