//1004_실습 12: 정수 배열 numbers가 매개변수로 주어집니다.
// numbers의 원소 중 두 개를 곱해 만들 수 있는 최댓값을 return하도록 solution 함수를 완성해주세요.

#include <string>
#include <vector>

using namespace std;


int solution(vector<int> numbers) {
    int answer = 0;
    for (int i = 0; i < numbers.size(); i++)
        for (int j = i + 1; j < numbers.size(); j++)
            if (numbers[i] * numbers[j] > answer)
                answer = numbers[i] * numbers[j];
    return answer;
}
