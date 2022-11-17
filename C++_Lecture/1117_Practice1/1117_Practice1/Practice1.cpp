#include <string>
#include <iostream>
#include <vector>

using namespace std;

// ���_class

class Complex {
private:

public:
	float a, b;
	Complex();
	Complex(float a, float b);
	Complex operator+(Complex& b);	// friend �Լ��� ������� �ʾ����Ƿ�, �Ķ���� �ϳ��� �ʿ�.
};

Complex::Complex() {
	a = 0; 
	b = 0;
}

Complex::Complex(float a, float b) {
	this->a = a;
	this->b = b;
}

Complex Complex::operator+(Complex& b) {
	Complex c;
	c.a = this->a + b.a;
	c.b = this->b + b.b;
	return c;
}

ostream& operator<<(ostream& os, const Complex& c) {
	if (c.a != 0) os << c.a;
	if (c.b < 0) os << "-" << -c.b << "i";
	else if (c.b > 0) os << "+" << c.b << "i";
	return os;
}

int main() {
	Complex a(2, 1);
	Complex b(3, -4);
	cout << (a+b) << endl;
}