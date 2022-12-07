// °Å¿ï¼ö
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Mirror {
private:
	double number;
	string str;
	string beforestr;
	string afterstr;
	string result;
	bool answer;
public:
	Mirror() { number = 0; str = ""; beforestr = ""; afterstr = ""; result = "false"; answer = false; }
	int isMirrorNum(double num);
	string print_Num();
};

int Mirror::isMirrorNum(double num) {
	number = num;
	str = to_string(number);
	beforestr = str;

	reverse(str.begin(), str.end());
	afterstr = str;

	if (beforestr == afterstr) {
		answer = true;
	}
	else {
		answer= false;
	}
	return answer;
}

string Mirror::print_Num() {
	if (answer = true) {
		result = "true";
	}
	else if(answer = false) {
		result = "false";
	}
	cout << result << endl;

	return result;
}

int main() {
	Mirror m;

	cout << m.isMirrorNum(767) << endl;
	m.print_Num();
	cout << m.isMirrorNum(123321) << endl;
	m.print_Num();
	cout << m.isMirrorNum(121212) << endl;
	m.print_Num();
	cout << m.isMirrorNum(7575) << endl;
	m.print_Num();

	return 0;
}