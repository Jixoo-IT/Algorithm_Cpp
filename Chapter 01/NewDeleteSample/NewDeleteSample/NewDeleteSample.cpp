#include <iostream>
#include <tchar.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {
	// �ν��Ͻ��� �������� �����ϴ� ���
	int* pData = new int;
	// �ʱ갪�� ����ϴ� ���
	int* pNewData = new int(10);

	*pData = 5;
	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;

	return 0;
}