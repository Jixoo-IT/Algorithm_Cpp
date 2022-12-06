// Part2. 실습 7: 핸드폰 번호 가리기

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Phone {
private:
    string phone_number;
    int size;
    string answer;
public:
    Phone() { size = 0; answer = ""; }    // 초기화 중요!
    string first_number(string num);        // 함수  자료형 string으로!, 처음에 int로 설정해서 return할 때 string->int로 변환 불가능하다는 오류 발생했음.
    string print_number(string num);
};

string Phone::first_number(string num) {
 
    phone_number = num;
   
    int size = phone_number.size();

    for (int i=0; i<size-4; i++) {
        answer += '*';
    }

    for (int i = size - 4; i < size; i++) {
        answer += phone_number.at(i);
    }

    return answer;
}

string Phone::print_number(string num) {
    cout << phone_number << "->" << answer << endl;
    return "";
}

int main() {
    Phone ph;

    string a = "01033334444";
    string b = "027778888";

    ph.first_number(a);
    ph.print_number(a);

    return 0;
}