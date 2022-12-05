#include <iostream>
using namespace std;

class People {
private:
	string name;
public:
	People(string name) {
		this->name = name;	// 생성자
	}
	friend void sayName(People p);
};

void sayName(People p) {
	// freind 함수이므로 접근 제어 지시자의 영향을 받지 않고 private 멤버에 직접 접근이 가능
	cout << p.name << endl;
}


class PeopleA {
private:
	string name;
	int height;
	friend class PeopleB;
public:
	// 생성자
	PeopleA(string name, int height) {
		this->name = name;
		this->height = height;
	}
};

class PeopleB {
public:
	//friend 선언으로 인해 PeopleA의 private 멤버에 접근 가능
	void info_A(PeopleA a) {
		cout << "이름 : " << a.name << endl;
		cout << "신장 : " << a.height << endl;
	}
};


void main() {
	People p("홍길동");
	sayName(p);

	PeopleA a("김철수", 170);
	PeopleB b;
	b.info_A(a);
}