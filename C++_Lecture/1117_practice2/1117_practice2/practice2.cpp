#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// ´ä¾È_class

class Point {
private:
	
public:
	float x, y;
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

class ThreePoint : public Point {
public:
	float z;
	ThreePoint();
	ThreePoint(float x, float y, float z);
	float length();
	float operator*(ThreePoint& b);
	friend ostream& operator<<(ostream& os, const Point& c);
};

ThreePoint::ThreePoint() {
	z = 0;
}

ThreePoint::ThreePoint(float x, float y, float z) : Point(x, y) {
	this->z = z;
}

float ThreePoint::length() {
	return sqrt(Point::length() * Point::length()+ z*z);
}

float ThreePoint:: operator*(ThreePoint& b) {
	return x * b.x + y * b.y + z * b.z;
}

ostream& operator<<(ostream& os, const ThreePoint& b) {
	os << "(" << b.x << "," << b.y << b.z << ")";
	return os;
}

int main() {
	
	Point a(2, 1);
	Point b(3, -4);
	cout << b << endl;
	cout << b.length() << endl;
	cout << (a * b) << endl;


	ThreePoint ta(2, 5, 1);
	ThreePoint tb(3, -4, 5);
	cout << tb << endl;
	cout << tb.length() << endl;
	cout << (ta * tb) << endl;
}