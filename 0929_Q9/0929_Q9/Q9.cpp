// 가까운 수
#include <string>
#include <vector>

using namespace std;

int getDiff(int n, int m) {
    if (n > m) return n - m;
    else return m - n;
}
int solution(vector<int> array, int n) {
    int answer = -200; //절대 닶이 될수 없는 값으로 초기화
    for (int i = 0; i < array.size(); i++)
        if (getDiff(array[i], n) < getDiff(answer, n) || getDiff(array[i], n) == getDiff(answer, n) && answer > array[i])//같을 때만 해당
            answer = array[i];
    return answer;
}