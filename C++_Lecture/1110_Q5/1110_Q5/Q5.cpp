// 문자열 다루기 기본

#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 풀이
bool solution(string s) {
    bool answer = true;

    if (s.size() != 4 && s.size() != 6) {
        return false;
    }

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i]) == false) {       // isDigit(): 숫자를 판별하는 함수, <cctype>
            return false;
        }
    }

    return answer;
}

// 답안
class MyString {
protected:              // defalut: private > 자식 클래스에서 참조하지 못함.
    char* pstr;
    void initPstr();
public:
    MyString();
    ~MyString();
    int length();
    void setString(const char* t);
    friend ostream& operator << (ostream& a, const MyString& b);
};
MyString::MyString() {
    pstr = NULL;
    initPstr();
}
MyString::~MyString() {
    if (pstr != NULL) delete[] pstr;
}
void MyString::initPstr() {
    pstr = new char[10];
}


int MyString::length() {
    int i;
    for (i = 0; i < 10; i++) {
        if (pstr[i] == '\0') break;     // null char
    }
    return i;
}
void MyString::setString(const char* t) {
    for (int i = 0; i < 10; i++) {
        pstr[i] == t[i];
        if (t[i] == '\0') break;
    }

}
ostream& operator<<(ostream& a, const MyString& b) {
    a << b.pstr;
    return a;
}

class FiveString : public MyString {
public:
    bool solve();
};
bool FiveString::solve() {
    int i;
    int len = length();
    if (len == 4 || len == 6) {
        for (i = 0; i < 10 && pstr[i] != '\0'; i++) {
            if (pstr[i] < '0' || pstr[i] > '9') return false;
        }
    }
    else return false;
    return true;
}
MyString::MyString() {

}


int main() {
    FiveString my;
    my.setString("test");
    cout << my.length() << ":"<< my << endl;
    return 0;
}

