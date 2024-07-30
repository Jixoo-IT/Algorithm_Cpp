#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<int> v, rev;
    int n, x, answer;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
        rev.push_back(x);
    }

    sort(v.begin(), v.end());       // sort() 이용하여 오름차순 정렬
    v.erase(unique(v.begin(), v.end()), v.end());       // 벡터에서 중복된 수 지우기

    for (int i = 0; i < n; i++) {
        answer = lower_bound(v.begin(), v.end(), rev[i]) - v.begin();       // find(): O(n), lower_bound(): O(logn)
        cout <<  answer << " ";         // lower_bound()는 반복자를 반환하므로, 인덱스를 구하고 싶다면 꼭 v.begin()를 빼야함.
    }

    return 0;
}