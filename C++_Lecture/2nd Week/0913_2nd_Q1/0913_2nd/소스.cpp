
#include <stdio.h>
#include <iostream>
using namespace std;

// extern int j;  ����O, ����X / ������, ���ǰ� ���� �ʾ����Ƿ�, �޸𸮰� �Ҵ������ �ʾ���. j�� ����� ���� �ܺ��� ���

int main() {
	int val1, val2;		//����(���� val1�� type�� int���� �˷���)�� ����(val1�� ���� �޸𸮸� �Ҵ�)�� ���ÿ�
	int largest, smallest;		// �ʱ�ȭ�� �ϴ� ���� ���� ����, ������ ���⼭�� �� ����.

	cout << "Please enter two integers: ";		
	cin >> val1 >> val2;		// val1�� val2�� ���ʴ�� �Է¹���. > �ִ밪�� �ּҰ��� �����ϴ� ���� �����غ���. �������� �� ���ϹǷ�.

	if (val1 > val2) {
		largest = val1;
		smallest = val2;
	}
	else {
		largest = val2;
		smallest = val1;
	}
	
	cout << "largest: " << largest << endl;		//endl: \n ��� endline�� ����. 
	cout << "smallest: " << smallest << endl;
	cout << "sum: " << (largest+smallest) << endl;		// Ȥ�ó�, ���� ������ �򰥸��ٸ� ��ȣ�� ������
	cout << "difference: " << (largest - smallest) << endl;
	cout << "mul: " << (largest * smallest) << endl;
	cout << "ratio: " << (largest / smallest) << endl;

	return 0;
}