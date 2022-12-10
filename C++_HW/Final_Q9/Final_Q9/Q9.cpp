// Q9. 최대공약수와 최소공배수

#include <string>
#include <vector>
#include <iostream>

using namespace std;

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
    cout << "[" << Min << ", " << Max << "]" << endl;   // vector operator overloading 어려워서 int로 각각 출력함.

    return answer; 
}

int main() {
    P9 p;
    p.solution(3, 12);
    p.solution(2, 5);
}