#include <iostream>
#include <string>

using namespace std;

class BigNumber {
private:
	char num[32];
public:
	BigNumber() {
		for (int i = 0; i < 32; i++)	// 배열 초기화
			num[i] = '0';
	}
	BigNumber(const char* c);
	char addDigit(char a, char b);
	friend ostream& operator <<(ostream os, BigNumber& big);
	BigNumber operator +(const BigNumber x);
};

BigNumber::BigNumber(const char* c) {
	for (int i = 0; i < 32; i++) {
		num[i] = c[i];
	}
}

ostream& operator<<(ostream os, BigNumber& big)
{
	os << big.num;
	return os;
}

BigNumber BigNumber:: operator+(const BigNumber x)
{
	BigNumber y;
	for (int i = 31; i >= 0; i++) {
		y.num[i] = addDigit(num[i], x.num[i]);
	}
	return y;
}


char BigNumber::addDigit(char a, char b)
{

	
	return (char)(nc + '0');
}

int main() {
	BigNumber a("1234567890");
	BigNumber b("123456");
	cout << (a + b) << endl;
}

















/*
class BigNumber {
private:
	char num[32];
public:
	BigNumber() { num[32] = {}; }
	BigNumber(const char*);
	friend ostream& operator<<(ostream& os, BigNumber& a);
	friend void operator +(BigNumber& a);
};
/*
BigNumber::BigNumber(const char*) {
	
	for (int i = 0; i < 32; i++) {
		num[i] = '0';
	}
}

ostream& operator<<(ostream& os, BigNumber& a) {
	for (int i = 0; i < 32; i++) {
		os << (int)(a.num);
	}
	cout << endl;
	return os;

	/*
	bool start = false;
	for (int i = 0; i < 32; i++) {
		if (start) cout << num[i];
		// if (!start && num[i] != '0') start = true;
	}
}

void operator+(BigNumber& x)
{
	BigNumber bigbig;
	
}

int main() {
	BigNumber a("1234567890");
	BigNumber b("123456");
	cout << (a + b) << endl;
}


class SweetArray {
private:
	int* array;
	int size;
public:
	SweetArray();
	SweetArray(int n);
	int& operator[](int i);

	friend ostream& operator<<(ostream& out, SweetArray S);

};

ostream& operator<<(ostream& out, SweetArray S) {
	if (S.size == 0) return out;
	out << S.array[0];
	for (int i = 1; i < S.size; i++)
		out << ", " << S.array[i];
	return out;
}
*/