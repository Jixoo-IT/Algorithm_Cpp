#include <string>
#include <vector>
#include <sstream>      // streamstring�� ����ϱ� ���� ���

using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);        // streamstring: ���ڿ����� ���ϴ� �ڷ����� �����͸� ������ �� ���
    ss.str(polynomial);                 // str(string s): ���� stringstream�� ���� s�� �ٲ۴�.

    int num_x = 0, num = 0;
    string token;       // token�� �ڷ���: string

    while (ss >> token) {       // ���ڿ� ss���� token�� �ڷ���(string)�� �´� ������ ���� ������ ss���� token���� �ڷḦ ����/�����ϴ� ��. ��, ���ڸ� ������ x�� ����
        if (token != "+") {
            if (token.find("x") != -1) {        // string.find("")�ش� ������ ���� �ε��� ��ȯ
                if (token == "x")
                    num_x += 1;
                else num_x += stoi(token.substr(0, token.size() - 1));      //substr(ù ��° ������ ��ġ, �κ� ���ڿ��� ����)
            }
            else {
                num += stoi(token);         // stoi: string to int
            }
        }
    }

    if (num_x == 1) {
        answer += "x";
    }
    else if (num_x > 1) {
        answer = answer + to_string(num_x) + "x";
    }


    if (answer.size() != 0 && num != 0) {
        answer = answer + " + " + to_string(num);
    }
    else if (num != 0)
        answer = to_string(num);

    return answer;
}