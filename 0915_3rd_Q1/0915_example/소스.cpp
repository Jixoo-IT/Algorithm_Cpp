int main() {
	//int i; C++������ int i�� �� �ᵵ ������.
	for (i = 0; i < 100; i++) // for�������� i�� ������.
		printf("%d", i);

	printf("%d", i)		// �̷��� �ؾ� 100���� ��µ�. / ���� int i ������ ���� �ʴ´ٸ�, for�� �ۿ����� i�� ������Ƿ�, ���� �߻�
}



#include <iostream>
using namespace std;

// void myfunc();		�̰� �� ����. declaration�� �ߺ��� �ǵ� ������..
// void myfunc();

// void myfunc() {		// main() ���� �� �ٿ� �־�� ��. ������ �̸��� ���� �ߺ��� define�� �Ϸ��� �Ѵ� ����
// cout << "my" << endl;
// }

void myfunc(int a) {		// ���� c������ int i, double ió�� �о��. ��ȣ�� ����! func�� �θ� ���� (parameter)�� �־ �θ�. ������: �̸��� ������ parameter�� �ٸ��� �ٸ��ɷ� ������
	cout << a << endl;
}



int main() {
	// myfunc(1.0f) float ó�� ��.
}

void myfunc() {		// main() ���� �� �ٿ� �־�� ��. ������ �̸��� ���� �ߺ��� define�� �Ϸ��� �Ѵ� ����
	cout << "my" << endl;
}