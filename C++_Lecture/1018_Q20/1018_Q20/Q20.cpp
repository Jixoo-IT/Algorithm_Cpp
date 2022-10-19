// Q.20 �ֺ� ���ϱ�
//  ���� �迭 array�� �Ű������� �־��� ��, �ֺ��� return �ϵ��� solution �Լ��� �ϼ��غ�����. 
// �ֺ��� ���� ���� -1�� return �մϴ�.

// ���: 0 �� array�� ���� < 1000�� �̿��� Ǯ��
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int count[1000];
    int mode;
    int modeCount = -1;
    bool duplicate = false; // ���� max


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


// ���2
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

// array[i]�� array[i+1]�� ���ϴ� ����� ���� ���ؼ�, ������ �켱������ �ؾ� ��.
// ������ nlog(n)
// n < nlog(n) < n^2