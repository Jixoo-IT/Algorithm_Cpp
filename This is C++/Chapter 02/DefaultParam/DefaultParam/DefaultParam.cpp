#include <iostream>
#include <tchar.h>

using namespace std;
int TestFunc(int nParam = 10) {
	return nParam;
}

int _tmain(int argc, _TCHAR* argv[]) {

	// ȣ���ڰ� ���μ��� ������� �ʾ����Ƿ�, ����Ʈ �� (int nParam = 10)�� �����Ѵ�. // 20
	cout << TestFunc() << endl;

	// ȣ���ڰ� ���μ��� Ȯ�������Ƿ� ����Ʈ ���� �����Ѵ�. // 10
	cout << TestFunc(20) << endl;

	return 0;
}