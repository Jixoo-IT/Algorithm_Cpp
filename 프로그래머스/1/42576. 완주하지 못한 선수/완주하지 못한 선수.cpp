#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> map;
    
    for (auto player : participant){
        if (map.end() == map.find(player)){     // 해당 player가 없다면,
            map.insert(make_pair(player, 1));          // player, 1 삽입 (player가 한 명)
        }else{
            map[player]++;      // 해당 player가 있으면, +1
        }
    }
    
    for (auto player : completion){     // completion(완주)에 있는 사람은
        map[player]--;      // map에서 -1
    }
    
    for (auto player : participant){
        if (map[player] > 0){       // player가 0보다 크면, 완주하지 못한 player이므로 출력
            answer = player;
            break;
        }
    }
    
    return answer;
}