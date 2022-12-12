// Q9. �ִ������� �ּҰ����

#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
class P9 {
private:
    int a, b, r;
    int Min;
    int Max;
    vector<int> answer;
public:
    vector<int> solution(int n, int m);
};


vector<int> P9:: solution(int n, int m) {
    a = n;
    b = m;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    answer.push_back(a);
    answer.push_back(n * m / a);

    Min = a;
    Max = n * m / a;
    cout << "[" << Min << ", " << Max << "]" << endl;   // vector operator overloading ������� int�� ���� �����.

    return answer; 
}

int main() {
    P9 p;
    p.solution(3, 12);
    p.solution(2, 5);
}
*/


/// 2�� �õ�_ �����ڿ� ���� �ʱ�ȭ
class S9 {
private:
    int a, b, c;
    int Max, Min;
public:
    S9() {
        a = 0;
        b = 0;
        c = 0;
        Max = 0;
        Min = 0;
    }
    int gcd(int a, int b);
    int lcm(int a, int b);
};


int S9:: gcd(int a, int b) {        // �ִ����� ���ϱ�
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    Max = a;
    return Max;
}

int S9::lcm(int a, int b) {
    Min = a * b / gcd(a, b);
    return Min;
}

int main() {
    S9 s;
    cout << s.gcd(3, 12) << ", " << s.lcm(3, 12) << endl;
    cout << s.gcd(2, 5) << ", " << s.lcm(2, 5) << endl;
}
