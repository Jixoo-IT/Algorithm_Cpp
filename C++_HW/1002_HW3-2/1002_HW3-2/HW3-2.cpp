// HW 3-2 숨어있는 숫자의 덧셈
// 문자열 my_string이 매개변수로 주어집니다. 
// my_string은 소문자, 대문자, 자연수로만 구성되어있습니다. 
// my_string안의 자연수들의 합을 return하도록 solution 함수를 완성해주세요.

// 풀이
#include <string>
#include <vector>

using namespace std;

int Sum(string a_string) {
    int i, num = 0, sum = 0;

    for (i = 0; a_string[i]; i++) { // a_string[i] 값이 없다면 종료
        if (a_string[i] >= '0' && a_string[i] <= '9') { // 숫자일 때,
            num = num * 10 + a_string[i] - '0';     // -'0': 아스키 값 0을 반환하여 -48이 된다. / 두 자리 수 숫자일 경우를 고려하기 위해, num * 10
        }                                           // 만약, a_string[0]이 1이라면, num * 10 + 49 - 48 (1의 아스키코드 값 49)
        else {                      // 알파벳일 때,
            if (num > 0) {          // num이 0 이상인 경우(직전에 숫자가 있었을 경우)
                sum = sum + num;    // sum에 num을 더한 후,
                num = 0;            // num = 0으로 값 초기화
            }
        }
    }
    if (num > 0) sum += num;        // 배열의 마지막이 숫자인 경우, num이 더해지지 않고 for문을 빠져나오므로, num을 추가로 더함.

    return sum;
}

int solution(string my_string) {
    int answer = 0;

    answer = Sum(my_string);

    return answer;
}


// 답안
int changeToDec(vector<int> temp) {
    int k = 1;
    int num = 0;
    for (int i = temp.size() - 1; i >= 0; i--, k *= 10)
        num += temp[i] * k;
    return num;
}



int getNumbers(string my_string) {
    vector<int> numbers;
    vector<int> temp;
    for (int i = 0; i < my_string.length(); i++) {

        if (my_string[i] < '0' || my_string[i] > '9') {
            if (temp.size() > 0) {
                numbers.push_back(changeToDec(temp));
                temp.clear();
            }
        }
        else {
            temp.push_back(my_string[i] - '0');
        }

        numbers.push_back(changeToDec(temp));
    } return numbers;
}


int solution(string my_string) {
    int answer = 0;

    vector<int> numbers = getNumbers(my_string);
    for (int i = 0; i < numbers.size(); i++) {
        answer += numbers[i];
    }

    return answer;
}