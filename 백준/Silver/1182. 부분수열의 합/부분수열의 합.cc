#include <iostream>
#include <algorithm>
using namespace std;

// 재귀함수
int N, S, answer = 0;
int* arr;

void func(int num, int sum) {

    if (num == N) {
        if (sum == S) {
            answer++;
        }
        return;
    }

    func(num + 1, sum);         // 현재 원소를 선택하지 않는 경우 > sum 값 유지
    func(num + 1, sum + arr[num]);      // 현재 원소를 선택하는 경우 > sum 값에 현재 원소를 더하기
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> S;

    arr = new int[N];       // 동적 배열 할당

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    func(0, 0);     // 재귀 함수를 호출하여 모든 부분수열을 탐색

    // 부분수열의 합이 0인 경우 빈 부분수열도 포함되므로, S가 0인 경우 빈 부분수열을 제외하기 위해 answer에서 1을 뺌
    if (S == 0) {
        answer--;
    };

    cout << answer;

    delete[] arr;       // 동적 배열 메모리 해제

    return 0;
}