#include <string>
#include <vector>

using namespace std;

class notfound {};

char translate(string sub) {
    vector<string> dic = { ".-","-...","-.-.","-..",".",
                                     "..-.","--.", "....","..",".---","-.-",
                                     ".-..","--","-.","---",".--.",
                         "--.-",".-.","...","-","..-","...-",".--",
                                     "-..-","-.--","--.." };

    for (int i = 0; i < dic.size(); i++) {
        if (sub == dic[i]) return 'a' + i;
    }

    throw notfound();
}

string solution(string letter) {
    string answer = "";
    int i, j;
    for (i = 0; i < letter.length(); i = j + 1) {
        for (j = i; j < letter.length(); j++) {
            if (letter[j] == ' ') {
                answer += translate(letter.substr(i, j - i));
                break;
            }
        }
        if (j == letter.length())
            answer += translate(letter.substr(i, j - i + 1));
    }
    return answer;
}
