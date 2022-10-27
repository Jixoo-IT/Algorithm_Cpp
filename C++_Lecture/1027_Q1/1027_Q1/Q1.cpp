// Q1_같은 숫자는 싫어

// 풀이
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    return arr;
}

// 답안

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    answer.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[i - 1]) answer.push_back(arr[i]);
    }

    return answer;
}