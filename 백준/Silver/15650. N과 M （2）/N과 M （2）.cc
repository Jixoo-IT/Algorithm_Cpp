#include <iostream>
using namespace std;

int n, m;
int arr[9] = { 0, };
bool visited[9] = { 0, };    // 중복 X 위해 사용

void dfs(int num, int k) {
    if (k == m) { // M에 도달했다면,
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << "\n";
        
        return;
    }
    
    for (int i = num; i <= n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            arr[k] = i; // 값 저장
            dfs(i + 1, k + 1); // m에 도달할 때까지 재귀 반복
            visited[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    dfs(1, 0);
}