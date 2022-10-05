// HW 3-3 캐릭터의 좌표
// up, down, left, right 방향키가 있으며 각 키를 누르면 위, 아래, 왼쪽, 오른쪽으로 한 칸씩 이동합니다.
// 캐릭터는 항상 [0,0]에서 시작할 때 키 입력이 모두 끝난 뒤에 캐릭터의 좌표 [x, y]를 return

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer{ 0, 0 };

    int boardX = board[0] / 2, boardY = board[1] / 2;

    for (int i = 0; i < keyinput.size(); i++) {

        if (keyinput[i] == "left") {
            if (answer[0] > -boardX) answer[0]--;
        }
        else if (keyinput[i] == "right") {
            if (answer[0] < boardX) answer[0]++;
        }
        else if (keyinput[i] == "up") {
            if (answer[1] < boardY) answer[1]++;
        }
        else if (keyinput[i] == "down") {
            if (answer[1] > -boardY) answer[1]--;
        }
    }

    return answer;
}


vector<int> move(vector<int> answer, string key, vector<int> board) {

    int boardX = board[0] / 2, boardY = board[1] / 2;
    if (key == "left") {
        if (answer[0] > -boardX) answer[0]--;
    }
    else if (key == "right") {
        if (answer[0] < boardX) answer[0]++;
    }
    else if (key == "up") {
        if (answer[1] < boardY) answer[1]++;
    }
    else if (key == "down") {
        if (answer[1] > -boardY) answer[1]--;
    }
}


vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;

    answer.push_back(0);
    answer.push_back(0);

    for (int i = 0; i < keyinput.size(); i++) {
        answer = move(answer, keyinput[i], board);
    }

    return answer;
}