// 3���� ������

#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

class P4 {
private:
	int num;
	int answer;
	vector<int> v;
public:
	P4() {		// �����ڿ��� ���� �ʱ�ȭ
		answer = 0; 
		num = 0; 
		vector<int> v = {};
	}
	int reverseNum(int n);
};

int P4::reverseNum(int n) {
	num = n;
	vector<int> v = {};
	answer = 0;

	while (num) {		// n�� 3�������� �ٲٱ�
		v.push_back(num % 3);
		num /= 3;
	}

	reverse(v.begin(), v.end());		// 3���� ������

	for (int i = 0; i < v.size(); i++) {		// 10�������� ǥ��
		answer += pow(3, i) * v[i];				// pow '���� �Լ�', pow(3, i) -> 3�� i����
	}

	return answer;
}

int main() {
	P4 p;
	cout << p.reverseNum(45) << endl;
	cout << p.reverseNum(125) << endl;
}