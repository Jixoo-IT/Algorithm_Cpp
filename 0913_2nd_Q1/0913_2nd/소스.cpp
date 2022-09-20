
#include <stdio.h>
#include <iostream>
using namespace std;

// extern int j;  선언O, 정의X / 하지만, 정의가 되지 않았으므로, 메모리가 할당되지는 않았음. j가 저장된 곳은 외부의 어딘가

int main() {
	int val1, val2;		//선언(변수 val1과 type이 int임을 알려줌)과 정의(val1을 위한 메모리를 할당)를 동시에
	int largest, smallest;		// 초기화를 하는 것이 좋은 습관, 하지만 여기서는 안 했음.

	cout << "Please enter two integers: ";		
	cin >> val1 >> val2;		// val1과 val2를 차례대로 입력받음. > 최대값과 최소값은 저장하는 것이 유리해보임. 나눗셈할 때 편리하므로.

	if (val1 > val2) {
		largest = val1;
		smallest = val2;
	}
	else {
		largest = val2;
		smallest = val1;
	}
	
	cout << "largest: " << largest << endl;		//endl: \n 대신 endline을 권장. 
	cout << "smallest: " << smallest << endl;
	cout << "sum: " << (largest+smallest) << endl;		// 혹시나, 연산 순서가 헷갈린다면 괄호를 쳐주자
	cout << "difference: " << (largest - smallest) << endl;
	cout << "mul: " << (largest * smallest) << endl;
	cout << "ratio: " << (largest / smallest) << endl;

	return 0;
}