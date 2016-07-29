#include <iostream>
#include <list>
#include <vector>
#include <string>
// page 112

using namespace std;

struct Entry
{
	string name;
	int number;
};

// phone_book.push_back({"Yuxiu Gu",123456});
// phone_book.push_back({"Yusheng Wang",234567});
// phone_book.push_back({"Yusheng Wang",234567});


int main()
{

	list<Entry> phone_book;
	
	Entry e = {"Yuxiu Gu",123456};
	phone_book.push_back(e);

	e.name = "Shit";
	e.number = 23414;
	// e = {"Shit",23414};

	phone_book.push_back(e);

	cout << phone_book.size() << endl;

	// e = {"Yusheng Wang",123456};
	// phone_book.push_back(e);

	// e = {"Michael Bloomberg",123456};
	// phone_book.push_back(e2);
	
	return 0;
}

