// Q.20 최빈값 구하기
//  정수 배열 array가 매개변수로 주어질 때, 최빈값을 return 하도록 solution 함수를 완성해보세요. 
// 최빈값이 여러 개면 -1을 return 합니다.

// 답안: 0 ≤ array의 원소 < 1000를 이용해 풀이
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int count[1000];
    int mode;
    int modeCount = -1;
    bool duplicate = false; // 같은 max


    for (int i = 0; i < 1000; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < array.size(); i++) {
        count[array[i]]++;
    }
    for (int i = 0; i < 1000; i++) {
        if (count[i] > modeCount) {
            mode = i;
            modeCount = count[i];
            duplicate = false;
        }
        else if (count[i] == modeCount)
            duplicate = true;
        if (duplicate) answer = -1;
        else answer = mode;

    }


    return answer;
}


// 답안2
#include <vector>
#include <string>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int count[1000];
    int mode;
    bool duplicate = false;
    int modeCount = -1;

    for (int i = 0; i < array.size(); i++) {
        int count = 0;
        for (int j = i; j < array.size(); j++) {
            if (array[i] == array[j]) count++;
        }

        if (count > modeCount) {
            mode = array[i];
            modeCount = count;
            duplicate = false;
        }
        else if (count == modeCount) {
            duplicate = true;
        }
    }

    if (duplicate) answer = -1;
    else answer = modeCount;
}

// array[i]와 array[i+1]을 비교하는 방법을 쓰기 위해선, 정렬을 우선적으로 해야 함.
// 정렬은 nlog(n)
// n < nlog(n) < n^2