#include <iostream>
#include <tchar.h>

using namespace std;

//�Ű������� int�� ���� ���� �����̴�.
void TestFunc(int &rParam) {
	rParam = 100;
}

int _tmain(int argc, _TCHAR* argv[]) {
	int nData = 0;

	TestFunc(nData);
	cout << nData << endl;

	return 0;
}