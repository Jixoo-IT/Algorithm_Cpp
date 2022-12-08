// 풀이
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


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



class Erase {
private:
    vector<int> arr;
public:
    Erase(vector<int> a) {
        arr = a;
    }
    vector<int> eraseNum(vector<int> array);
    friend ostream& operator << (std::ostream& out, const Erase& erase) {
        out << erase.arr;

        return out;
    }
};

vector<int> Erase::eraseNum(vector<int> array) {
    arr = array;
    arr.erase(unique(arr.begin(), arr.end(), arr.end()));

    return arr;
}

int main() {
    Erase e;
    vector<int> arr1 = { 1, 1, 3, 3, 0, 1, 1 };         // int형 백터 생성 후 1, 1, 3, 3, 0, 1, 1 으로 초기화, { } O, [ ] X 주의하자.

    cout << e.eraseNum(arr1) << endl;

}

