// Q7. �빮�ڿ� �ҹ���

// Ǯ�� (�ƽ�Ű�ڵ� 65-90: �빮��, 97-122: �ҹ���)
#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";

    for (int i = 0; i < my_string.size(); i++) {
        if (my_string[i] > 'Z') {   // 'Z'���� �ƽ�Ű�ڵ� ���� ũ�Ƿ� �ҹ��� -> �빮��
            answer += my_string[i] - 32;
        }
        else {      // 'Z'���� �ƽ�Ű�ڵ� ���� �����Ƿ� �빮�� -> �ҹ���
            answer += my_string[i] + 32;
        }
    }

    return answer;
}


// ���
#include <string>
#include <vector>

using namespace std;

char change(char c) {
    if (c > 'Z') {   // lower case
        return c - ('a' - 'A'); // return c - 32;
    }
    else {    // upper case
        return c + ('a' - 'A'); // return c + 32;
    }
}


string solution(string my_string) {
    string answer = "";

    for (int i = 0; i < my_string.size(); i++) {
        answer += change(my_string[i]);
    }

    return answer;
}