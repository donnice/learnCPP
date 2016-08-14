#include <iostream>
#include <iterator>
#include <string>
#include <regex>

using namespace std;

int main()
{
	string s = "Some people, when confronted with a problem, think "
	        "\"I know, I'll use regular expressions.\" "
			        "Now they have two problems.";
	string str = "zzxayyzz";
	regex re1(".*(a|xayy)");	// ECMA
	regex re2(".*(a|xayy)",regex::extended);

	cout << "Searching for .*(a|xayy) in zzxayyzz:\n";
	smatch m;
	
	regex_search(str,m,re1);
	cout << " ECMA (depth first search) match: " << m[0] << endl;

	regex_search(str,m,re2);
	cout << " POSIX (leftmost longest) match: " << m[0] << endl;

	return 0;
}
