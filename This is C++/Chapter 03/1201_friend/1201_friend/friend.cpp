#include <iostream>
using namespace std;

class People {
private:
	string name;
public:
	People(string name) {
		this->name = name;	// ������
	}
	friend void sayName(People p);
};

void sayName(People p) {
	// freind �Լ��̹Ƿ� ���� ���� �������� ������ ���� �ʰ� private ����� ���� ������ ����
	cout << p.name << endl;
}


class PeopleA {
private:
	string name;
	int height;
	friend class PeopleB;
public:
	// ������
	PeopleA(string name, int height) {
		this->name = name;
		this->height = height;
	}
};

class PeopleB {
public:
	//friend �������� ���� PeopleA�� private ����� ���� ����
	void info_A(PeopleA a) {
		cout << "�̸� : " << a.name << endl;
		cout << "���� : " << a.height << endl;
	}
};


void main() {
	People p("ȫ�浿");
	sayName(p);

	PeopleA a("��ö��", 170);
	PeopleB b;
	b.info_A(a);
}