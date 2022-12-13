// Q12. 2개 이하로 다른 비트

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class P12 {
private:
	vector <long long> num;
	vector<long long> answer;
public:
	P12(){ answer = {}; };
	vector<long long> solution(vector<long long> numbers);
};


vector<long long> P12::solution(vector<long long> numbers) {
    num = numbers;

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 == 0)
            answer.push_back(numbers[i] + 1);
        else {
            long long bit = 1;
            while (true) {
                if ((numbers[i] & bit) == 0) break;
                bit *= 2;
            }
            bit = bit / 2;
            answer.push_back(numbers[i] + bit);
        }
    }
    cout << answer[0] <<", "<< answer[1] << endl;
    return answer;
}

int main() {
    P12 p;
    p.solution({ 2, 7 });

    return 0;
}