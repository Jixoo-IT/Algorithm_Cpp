// Part2. �ǽ�3: �������� 1�� �Ǵ� �� ã��

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Return {
private:
    int i;
    int n;
    int result;
public:
    
    int remainder(int n);
    int print_remainder(int n);
};

int Return:: remainder(int n) {
    for (i = 1; i <= n; i++) {
        if (n % i == 1) {
            return i;
        }
    }
}

int Return::print_remainder(int n) {
    cout << n << "�� �������� 1�� �ǵ��� �ϴ� ���� "<< i << " �Դϴ�." << endl;
    return 0;
}

/*
int main() {
    Return re;

    int a = 10;
    int b = 12;

    re.remainder(a);
    re.print_remainder(a);

    re.remainder(b);
    re.print_remainder(b);

    return 0;
}
*/


// 2�� Ǯ��
class S7 {
    int num;
    int answer;
public:
    S7() { num = 0; answer = 0; }
    int Find(int n);
};

int S7::Find(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 1) {
            answer = i;
            return answer;
        }
    }
}

int main() {
    S7 s;
    cout << s.Find(10) << endl;
    cout << s.Find(12) << endl;
}