#include <string>
#include <iostream>
#include <vector>

using namespace std;

// 답안_class

class PhoneNumber {
private:
	string number;
public:
	PhoneNumber(string num);
	string masking(int k) const;
	friend ostream& operator<<(ostream& os, const PhoneNumber& p);
};

PhoneNumber::PhoneNumber(string num) {
	number = num;
}

string PhoneNumber::masking(int k) const{
	string masked = "";
	for (int i = 0; i < number.length(); i++) {
		if (i < k) masked += "*";
		else masked += number[i];
	}
	return masked;
}

ostream& operator << (ostream& os, const PhoneNumber& p) {
	string masked = p.masking(7);
	os << masked;
	return os;
}


int main() {
	PhoneNumber pn("01022223333");
	cout << pn << endl;
}

// 풀이
string solution(string phone_number) {
	string answer = "";

	int size = phone_number.size();

	for (int i = 0; i < size - 4; i++) {
		answer += '*';
	}

	for (int i = size - 4; i < size; i++) {
		answer += phone_number.at(i);
	}

	return answer;
}