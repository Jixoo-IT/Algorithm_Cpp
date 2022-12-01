#include <cstdio>

class USERDATA {
public:
	// 멤버 변수 선언
	int nAge;
	char szName[32];

	// 멤버 함수 선언 및 정의
	void Print(void) {
		printf("%d, %s\n", nAge, szName);
	}
};

int main(int argc, char* argv[]) {	// argc 는 argument의 수, argv 는 argument 가 char 형으로 저장이 되는 변수
	USERDATA user = { 10, "철수" };
	user.Print();

	return 0;
}