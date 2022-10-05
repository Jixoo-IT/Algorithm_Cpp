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
	
	//TestFunc(5); // 오류(활성)	E0308	오버로드된 함수 "TestFunc"의 인스턴스 중 두 개 이상이 인수 목록과 일치합니다.
	TestFunc(5, 10);	// 가능!

	return 0;
}