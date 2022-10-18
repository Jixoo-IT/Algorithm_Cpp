#include <iostream>
#include <string>
#include <vector>

using namespace std;

void test1(int a) {
	a++;		// call by value�̹Ƿ�, i�� ���� ����ȴ�. ������ ����
}
void test2(int& a) {
	a++;		// call by reference �̹Ƿ�, j�� ���� ����ȴ�.
}

void test3(vector<int> a) {
	a.push_back(100);
}

void test4(vector<int>& a) {
	a.push_back(100);
}

/*
void test5(const vector<int>& a) {	// compile ���� �߻�, const�� �б⸸ �����ϰ�, ������ �Ұ���/ ����, call by reference���� ���� �����Ϸ��� �Ѵٸ�, ���� �߻�
	a.push_back(100);
}
*/


int main() {
	int i = 0, j = 0;
	vector<int> k, l;

	test1(i);	
	test2(j);

	test3(k);
	test4(l);

	cout << "i:" << i << endl;		// i=0
	cout << "j:" << j << endl;		// j=1
	cout << "k:" << k.size() << endl;		// k=0
	cout << "l:" << l.size() << endl;		// l=1
}

// ���� �����ϴ� �ð��� �Ʊ����, call by value�� �ƴ� call by reference�� ����ϰ� �ʹٸ�, �� ���� ������ġ 'const'
