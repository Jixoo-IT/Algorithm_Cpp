#include <iostream>

using namespace std;

// Ŭ���� �����
class Circle {
public:
	int radius;
	Circle();	// �⺻ ������
	Circle(int r);		// ������ �Ű� ������ ���� �޴� ������
	double getArea();
};


// Ŭ���� ������ (������)
Circle::Circle() {
	radius = 1;		// ������ �� �ʱ�ȭ
	cout << "������" << radius << " �� ����" << endl;
}
Circle::Circle(int r) {
	radius = r;		// ������ �� �ʱ�ȭ
	cout << "������" << radius << " �� ����" << endl;
}

// Ŭ���� ������(��� �Լ�)
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

}