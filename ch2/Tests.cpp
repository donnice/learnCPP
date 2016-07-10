// Test vim and basic cpp skills
#include<iostream>
#include<string>
using namespace std;

bool accept()
{
	cout << "Do you want to proceed(y or n)\n";	// write question

	char answer = 0;
	cin >> answer;

	if(answer == 'y') return true;
	return false;
}


int main()
{
	bool torf;
	torf = accept();
	string str = torf? "Yes?":"No!!!!";
	cout << str << endl;

	return 0;
}
