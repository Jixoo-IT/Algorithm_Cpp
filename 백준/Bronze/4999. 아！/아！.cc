#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1, str2;	// str1: 가장 길게 낼 수 있는 소리, str2: 의사가 듣기 원하는 소리
	cin >> str1 >> str2;

	int cnt1 = 0, cnt2 = 0;

	for (int i = 0; i < str1.length(); i++) {	// h는 항상 마지막에 하나 주어지기 때문에, a의 개수를 count해서 비교하기.
		if (str1[i] == 'a') {
			cnt1++;
		}
	}

	for (int i = 0; i < str2.length(); i++) {
		if (str2[i] == 'a') {
			cnt2++;
		}
	}

	if (cnt1 >= cnt2) {	// 환자의 소리 >= 의사가 원하는 소리
		cout << "go";
	}
	else {
		cout << "no";
	}
}