#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long N, M, answer;

    cin >> N >> M;

    answer = N - M;
    if (answer < 0) {
        answer = abs(answer);
    }
    cout << answer;
}