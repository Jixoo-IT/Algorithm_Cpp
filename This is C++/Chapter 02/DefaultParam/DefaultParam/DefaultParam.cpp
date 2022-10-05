#include <iostream>
#include <tchar.h>

using namespace std;
int TestFunc(int nParam = 10) {
	return nParam;
}

int _tmain(int argc, _TCHAR* argv[]) {

	// 호출자가 실인수를 기술하지 않았으므로, 디폴트 값 (int nParam = 10)을 적용한다. // 20
	cout << TestFunc() << endl;

	// 호출자가 실인수를 확정했으므로 디폴트 값을 무시한다. // 10
	cout << TestFunc(20) << endl;

	return 0;
}