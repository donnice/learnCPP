#include <iostream>

namespace My_code
{
	class complex{/*...*/};
	complex sqrt(complex);

	int main();
}

int My_code::main()
{
	complex z{1,2};
	auto z2 = sqrt(z);
	std::cout << "test" << std::endl;
}

int main()
{
	return My_code::main();
}
