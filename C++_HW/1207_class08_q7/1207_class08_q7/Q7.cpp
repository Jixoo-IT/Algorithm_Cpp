// Part2. �ǽ� 7: �ڵ��� ��ȣ ������

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Phone {
private:
    string phone_number;
    int size;
    string answer;
public:
    Phone() { size = 0; answer = ""; }    // �ʱ�ȭ �߿�!
    string first_number(string num);        // �Լ�  �ڷ��� string����!, ó���� int�� �����ؼ� return�� �� string->int�� ��ȯ �Ұ����ϴٴ� ���� �߻�����.
    string print_number(string num);
};

string Phone::first_number(string num) {
 
    phone_number = num;
   
    int size = phone_number.size();

    for (int i=0; i<size-4; i++) {
        answer += '*';
    }

    for (int i = size - 4; i < size; i++) {
        answer += phone_number.at(i);
    }

    return answer;
}

string Phone::print_number(string num) {
    cout << phone_number << "->" << answer << endl;
    return "";
}

int main() {
    Phone ph;

    string a = "01033334444";
    string b = "027778888";

    ph.first_number(a);
    ph.print_number(a);

    return 0;
}