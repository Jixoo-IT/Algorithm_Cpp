#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	int N, num;
	cin >> N;

	stack<int> st;
	string str;

	for (int i = 0; i < N; i++) {
		cin >> str;

		if (str == "push") {
			cin >> num;
			st.push(num);
		}
		else if (str == "pop") {
			if (st.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}
		else if (str == "size") {
			cout << st.size() << '\n';
		}
		else if (str == "empty") {
			if (st.empty()) {
				cout << "1" << '\n';
			}
			else {
				cout << "0" << '\n';
			}
		}
		else if (str == "top") {
			if (st.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << st.top() << '\n';
			}
		}
	}
	return 0;
}