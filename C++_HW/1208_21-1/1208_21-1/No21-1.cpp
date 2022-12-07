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
	string isMirrorNum(double num);
};

string Mirror::isMirrorNum(double num) {
	number = num;
	str = to_string(number);
	beforestr = str;

	reverse(str.begin(), str.end());
	afterstr = str;

	if (beforestr == afterstr) {
		result = "true";
	}
	else {
		result = "false";
	}
	return result;
}


int main() {
	Mirror m;

	cout << m.isMirrorNum(767) << endl;

	return 0;
}