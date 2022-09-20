int main() {
	//int i; C++에서는 int i를 안 써도 괜찮음.
	for (i = 0; i < 100; i++) // for문에서만 i가 존재함.
		printf("%d", i);

	printf("%d", i)		// 이렇게 해야 100까지 출력됨. / 만약 int i 선언을 하지 않는다면, for문 밖에서는 i가 사라지므로, 에러 발생
}



#include <iostream>
using namespace std;

// void myfunc();		이건 또 봐줌. declaration은 중복이 되도 괜찮대..
// void myfunc();

// void myfunc() {		// main() 보다 윗 줄에 있어야 함. 동일한 이름에 대해 중복된 define을 하려고 한다 에러
// cout << "my" << endl;
// }

void myfunc(int a) {		// 고전 c에서는 int i, double i처럼 읽어옴. 모호성 때문! func을 부를 때는 (parameter)를 넣어서 부름. 다형성: 이름이 같더라도 parameter가 다르면 다른걸로 쳐주자
	cout << a << endl;
}



int main() {
	// myfunc(1.0f) float 처리 됨.
}

void myfunc() {		// main() 보다 윗 줄에 있어야 함. 동일한 이름에 대해 중복된 define을 하려고 한다 에러
	cout << "my" << endl;
}