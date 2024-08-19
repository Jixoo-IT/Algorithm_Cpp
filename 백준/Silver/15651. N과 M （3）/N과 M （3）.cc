#include <iostream>
using namespace std;

int n, m;
int arr[9] = { 0, };

void dfs(int num, int k) {
    if (k == m) { // M에 도달했다면,
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    else {
        for (int i = 1; i <= n; i++) { // 1부터 n까지 반복문
            arr[k] = i; // 값 저장
            dfs(i, k + 1); // m에 도달할 때까지 재귀 반복
        }
    }
}

int main() {
    cin >> n >> m;

    dfs(1, 0);
}