// Enummerations p65
#include<iostream>
using namespace std;

enum class Color{red,blue,greed};
enum class Traffic_light{green,yellow,red};

//using namespace Color;

Traffic_light& operator++(Traffic_light& t)
{
	switch(t)
	{
		case Traffic_light::green:
			return t = Traffic_light::yellow;
		case Traffic_light::yellow:
			return t = Traffic_light::red;
		case Traffic_light::red:
			return t = Traffic_light::green;
	}
}

int main()
{
	Color col = Color::red;
//	Color col2 = red;
	Traffic_light light = Traffic_light::red;
	return 0;
}
