// 풀이
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*
class Point {   // 출력 연산자 오버로딩_ 예시
private:
    double m_x, m_y, m_z;
public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z) {

    }

    friend ostream& operator << (std::ostream& out, const Point point) {
        out << point.m_x << point.m_y << point.m_z << endl;

        return out;
    }
};
*/


class Erase {
private:
    vector<int> arr;
    vector<int> answer;
public:
    Erase() {
        vector<int> arr = {}; vector<int> answer = {};
    }
    vector<int> eraseNum(vector<int> array);
    void printNum(vector<int> array);
    // friend ostream& operator << (ostream& out, const Erase erase);      // freind 붙이니, '이 연산자 함수에 매개변수가 너무 많습니다' 해결

};

vector<int> Erase::eraseNum(vector<int> array) {
    arr = array;
    arr.erase(unique(arr.begin(), arr.end(), arr.end()));

    return arr;
}

void Erase::printNum(vector<int> array) {
    arr = array;
    int arr_amount;
    arr_amount = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arr_amount; i++) {
        cout << arr[i] << endl;
    }
}

/* 배열이라 cout << 오버로딩 해주어야 하는데 vector는 출력 연산자 오버로딩이 어려워 출력 함수를 새로 만들어 해결함.
ostream& operator << (ostream& out, const Erase erase) {
    out << erase.arr;

    return out;
}
*/

int main() {
    Erase e;
    vector<int> arr1 = { 1, 1, 3, 3, 0, 1, 1 }; // int형 백터 생성 후 1, 1, 3, 3, 0, 1, 1 으로 초기화, { } O, [ ] X 주의하자.
    
    vector<int> answer;

    e.eraseNum(arr1);
    e.printNum(arr1);

    return 0;
}

