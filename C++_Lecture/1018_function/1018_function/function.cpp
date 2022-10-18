#include <iostream>
#include <string>
#include <vector>

using namespace std;

void test1(int a) {
	a++;		// call by value이므로, i의 값은 변경된다. 안전성 높음
}
void test2(int& a) {
	a++;		// call by reference 이므로, j의 값은 변경된다.
}

void test3(vector<int> a) {
	a.push_back(100);
}

void test4(vector<int>& a) {
	a.push_back(100);
}

/*
void test5(const vector<int>& a) {	// compile 에러 발생, const는 읽기만 가능하고, 변경이 불가능/ 따라서, call by reference에서 값을 변경하려고 한다면, 오류 발생
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

// 값을 복사하는 시간이 아까워서, call by value가 아닌 call by reference를 사용하고 싶다면, 한 가지 안전장치 'const'
