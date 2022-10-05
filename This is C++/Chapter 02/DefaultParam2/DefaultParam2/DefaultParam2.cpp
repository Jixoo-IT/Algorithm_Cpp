#include <iostream>
#include <tchar.h>

using namespace std;
int TestFunc(int nParam1, int nParam2 = 2) {
	return nParam1 * nParam2;
}

int _tmain(int argc, _TCHAR* argv[]) {
	cout << TestFunc(10) << endl;

	cout << TestFunc(10, 5) << endl;

	return 0;
}