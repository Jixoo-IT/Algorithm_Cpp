#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// ´ä¾È_class

class Point {
private:
	float x, y;
public:
	Point();
	Point(float x, float y);
	float length();
	float operator*(Point& b);
	friend ostream& operator<<(ostream& os, const Point& c);
};

Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(float x, float y) {
	this->x = x;
	this->y = y;
}

float Point::length() {
	return sqrt(x * x + y * y);
}

float Point::operator*(Point& b) {
	return x * b.x + y * b.y;
}

ostream& operator<<(ostream& os, const Point& b) {
	os << "(" << b.x << "," << b.y << ")";
	return os;
}

int main() {
	Point a(2, 1);
	Point b(3, -4);
	cout << b << endl;
	cout << b.length() << endl;
	cout << (a * b) << endl;
}