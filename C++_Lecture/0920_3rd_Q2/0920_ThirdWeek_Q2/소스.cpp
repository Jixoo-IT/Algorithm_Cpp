#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(vector<int> arr)
{
    bool answer = true;
    int len = arr.size();       // 중복 제거 전에 arr.size()를 저장해야 함.

    arr.erase(unique(arr.begin(), arr.end()), arr.end());   // arr 배열 내, 중복된 원소 제거, 괄호 주의
    sort(arr.begin(), arr.end());       // 중복 제거된 배열을 오름차순으로 정렬

    if (arr.back() != len) {        // 정렬된 arr의 마지막 원소가 그 배열의 길이 값과 다르다면, false
        answer = false;
    }

    return answer;

}