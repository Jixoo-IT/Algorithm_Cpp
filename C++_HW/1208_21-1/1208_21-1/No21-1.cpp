// °Å¿ï¼ö
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Mirror {
private:
	int number;
	string str;
	string beforestr;
	string afterstr;
	string result;
	bool answer;
public:
	Mirror() { number = 0; str = ""; beforestr = ""; afterstr = ""; result = ""; answer = false; }
	string isMirrorNum(int num);
};

string Mirror::isMirrorNum(int num) {
	number = num;
	str = to_string(number);
	beforestr = str;
	cout << beforestr << endl;

	reverse(str.begin(), str.end());
	afterstr = str;
	cout << afterstr << endl;

	if (beforestr == afterstr) {
		answer = true;
		result = "true";
	}
	else {
		answer= false;
		result = "false";
	}
	
	return result;
}

int main() {
	Mirror m;
	cout << m.isMirrorNum(767) << endl;
	cout << m.isMirrorNum(123321) << endl;
	cout << m.isMirrorNum(121212) << endl;
	cout << m.isMirrorNum(7575) << endl;

	return 0;
}