#include <iostream>

using namespace std;

// 클래스 선언부
class Circle {
public:
	int radius;
	Circle();	// 기본 생성자
	Circle(int r);		// 정수형 매개 변수를 전달 받는 생성자
	double getArea();
};


// 클래스 구현부 (생성자)
Circle::Circle() {
	radius = 1;		// 반지름 값 초기화
	cout << "반지름" << radius << " 원 생성" << endl;
}
Circle::Circle(int r) {
	radius = r;		// 반지름 값 초기화
	cout << "반지름" << radius << " 원 생성" << endl;
}

// 클래스 구현부(멤버 함수)
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

}