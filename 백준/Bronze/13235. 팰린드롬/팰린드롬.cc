#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string str, str_first;
	cin >> str;

	str_first = str;

	reverse(str.begin(), str.end());

	if (str_first == str) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}