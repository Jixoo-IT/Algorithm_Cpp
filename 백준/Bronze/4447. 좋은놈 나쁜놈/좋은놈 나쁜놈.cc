#include <iostream>
#include <string>
using namespace std;

int main() {
	int T, cntG, cntB;
	string str;

	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++) {
		getline(cin, str);

		cntG = 0;
		cntB = 0;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'G' || str[i] == 'g') {
				cntG++;
			}
			else if (str[i] == 'B' || str[i] == 'b') {
				cntB++;
			}
		}

		if (cntG == cntB) {
			cout << str << " is " << "NEUTRAL\n";
		} 
		else if (cntG > cntB) {
			cout << str << " is " << "GOOD\n";
		}
		else {
			cout << str << " is " << "A BADDY\n";
		}
	}
	return 0;
}