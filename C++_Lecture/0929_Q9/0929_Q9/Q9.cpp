// Q9_가까운 수

// 풀이
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int diff = 100000;

    sort(array.begin(), array.end());       // sort 함수: 배열을 오름차순으로 정렬
    for (const auto v : array) {         // 범위 기반 for문: for(type element : element_array)
                                        // 인덱스 0부터 끝까지 해당하는 요소가 element_array에서 element(임시객체)로 복사된다
        if (diff > abs(v - n)) {       // abs 함수: 절댓값을 반환, array의 원소와 n의 차이가 작은 것을 diff로 함.
            diff = abs(v - n);
            answer = v;
        }

    }
    return answer;
}

// 답안
int getDiff(int n, int m) {
    if (n > m) return n - m;
    else return m - n;
}
int solution(vector<int> array, int n) {
    int answer = -200; //절대 답이 될수 없는 값으로 초기화
    for (int i = 0; i < array.size(); i++)
        if (getDiff(array[i], n) < getDiff(answer, n) || getDiff(array[i], n) == getDiff(answer, n) && answer > array[i])//같을 때만 해당
            answer = array[i];
    return answer;
}