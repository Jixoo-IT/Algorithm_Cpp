#include <iostream>
#include <tchar.h>

using namespace std;

void TestFunc(int a) {
	cout << "TestFunc(int)" << endl;
}

void TestFunc(int a, int b = 10) {
	cout << "TestFunc(int, int)" << endl;
}

int _tmain(int argc, _TCHAR* argv[]) {
	
	//TestFunc(5); // ����(Ȱ��)	E0308	�����ε�� �Լ� "TestFunc"�� �ν��Ͻ� �� �� �� �̻��� �μ� ��ϰ� ��ġ�մϴ�.
	TestFunc(5, 10);	// ����!

	return 0;
}