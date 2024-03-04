#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool palindrome(string str) {
	string str_reverse = str;
	reverse(str_reverse.begin(), str_reverse.end());
	
	return str_reverse == str;
}

int main() {
	string str, result;

	while (1) {
		cin >> str;
		if (str == "0") {
			break;
		}
		if (palindrome(str)==1){
			result = "yes";
		}
		else {
			result = "no";
		}
		cout << result << "\n";
	}

}