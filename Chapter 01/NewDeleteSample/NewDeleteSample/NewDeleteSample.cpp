#include <iostream>
#include <tchar.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {
	// 인스턴스만 동적으로 생성하는 경우
	int* pData = new int;
	// 초깃값을 기술하는 경우
	int* pNewData = new int(10);

	*pData = 5;
	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;

	return 0;
}