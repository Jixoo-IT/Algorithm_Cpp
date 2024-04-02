#include <iostream>
#include <vector>
using namespace std;

// 문제에서 주어진 fibonacci 함수가 아닌, 0의 개수와 1의 개수의 규칙성을 파악해 배열 dp를 만들어 풀이함.
int dp[41] = { 0,1,1 };     // 배열의 요소를 {0, 1, 1, 0, 0, ... ,0}으로 초기화


int main() {
    int n, t;
    cin >> t;

    for (int i = 3; i < 41; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    for (int i = 0; i < t; i++) {
        cin >> n;

        if (n == 0) {
            cout << "1 0" << "\n";
        }
        else if (n == 1) {
            cout << "0 1" << "\n";
        }
        else {
            cout << dp[n - 1] << " " << dp[n] << "\n";
        }
    }

    return 0;
}


/*
vector<long long> memo;
int cnt0 = 0, cnt1 = 0;

int fibonacci(int n) {
    if (n == 0) {
        cnt0++;
        return 0;
    }
    else if (n == 1) {
        cnt1++;
        return 1;
    }
    else if (memo[n] != -1) {   // 메모이제이션에 이전에 계산한 값이 저장되어 있다면, 사용
        memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return memo[n];
    }

    // memo[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return memo[n];
}

int main() {
    int n, t;
    cin >> t;

    memo.resize(t + 2, -1);     // 메모이제이션을 -1로 모두 초기화 | 메모이제이션에 값이 없다면 -1이다.

    for (int i = 0; i < t; i++) {
        cnt0 = 0, cnt1 = 0;
        cin >> n;

        fibonacci(n);
        cout << cnt0 << " " << cnt1 << "\n";
    }

    return 0;
}
*/
