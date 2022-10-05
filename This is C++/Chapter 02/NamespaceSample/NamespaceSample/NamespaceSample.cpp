#include <iostream>
#include <tchar.h>

using namespace std;

namespace TEST {
	int g_nData = 100;
	
	void TestFunc(void) {
		cout << "Test::TestFunc()" << endl;
	}
}


int _tmain(int argc, _TCHAR* argv[]) {

	TEST::TestFunc();
	cout << TEST::g_nData << endl;

	return 0;
}