#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(vector<int> arr)
{
    bool answer = true;
    int len = arr.size();       // �ߺ� ���� ���� arr.size()�� �����ؾ� ��.

    arr.erase(unique(arr.begin(), arr.end()), arr.end());   // arr �迭 ��, �ߺ��� ���� ����, ��ȣ ����
    sort(arr.begin(), arr.end());       // �ߺ� ���ŵ� �迭�� ������������ ����

    if (arr.back() != len) {        // ���ĵ� arr�� ������ ���Ұ� �� �迭�� ���� ���� �ٸ��ٸ�, false
        answer = false;
    }

    return answer;

}