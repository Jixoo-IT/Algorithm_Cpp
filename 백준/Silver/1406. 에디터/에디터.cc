#include <iostream>
#include <list>
#include <string>
using namespace std;

// 연결 리스트 사용
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	char op;
	int m;

	cin >> s >> m;

	list<char> l(s.begin(), s.end());		// 리스트 선언
	list<char> ::iterator t = l.end();		// 반복자 선언 | auto t = l.emd();


	for (int i = 0; i < m; i++) {
		cin >> op;
		if (op == 'L' && t != l.begin()) {	// 커서가 문장의 맨 앞이면 무시됨.
			t--;
		}
		else if (op == 'D' && t != l.end()) {	// 커서가 문장의 맨 뒤면 무시됨.
			t++;
		}
		else if (op == 'B' && t != l.begin()) {
			t--;
			t = l.erase(t);
		}
		else if (op == 'P') {
			cin >> op;
			l.insert(t, op);
		}
	}

	for (auto c : l) {
		cout << c;
	}

	/*
	for (t = l.begin(); t !=end(); t++){
		cout << *t;
	}
	*/

	return 0;

}