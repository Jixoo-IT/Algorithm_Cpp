// Q6. ���簢�� �����

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class P6 {
	int n, m;
	string s;
public:
	P6() { n = 0; m = 0; s = ""; }
	string Star(int x, int y);
};

string P6:: Star(int x, int y) {
	n = x;
	m = y;

	s.append(n, '*');	// a�� ������ŭ * �����ֱ�

	for (int i = 0; i < m; i++) {
		cout << s << endl;
	}

	return s;
}

int main() {
	P6 p;
	p.Star(5, 3);

	return 0;
}