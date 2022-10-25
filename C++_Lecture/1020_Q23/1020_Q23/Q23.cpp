// Q23. 팰린드롬
// 앞에서부터 읽을 때와 뒤에서부터 읽을 때 똑같은 단어를 팰린드롬(palindrome)이라고 합니다. 
// 두 자연수 n, m이 매개변수로 주어질 때,
// n 이상 m 이하의 자연수 중 팰린드롬인 숫자의 개수를 return 하도록 solution 함수를 완성해 주세요.

//풀이
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, int m) {
    int answer = 0;
    string input;

    for (int i = n; i <= m; i++) {
        input = to_string(i);
        string first = input;
        reverse(input.begin(), input.end());
        if (first == input) {
            answer++;
        }
    }

    return answer;
}
