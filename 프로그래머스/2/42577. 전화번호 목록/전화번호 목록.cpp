#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    unordered_set<string> set;
    
    for (int i=0;i<phone_book.size();i++){
        set.insert(phone_book[i]);
    }
    
    for (int i = 0; i < phone_book.size() ; i++){       // 전화번호의 전체 개수
        for (int j = 0; j < phone_book[i].size() - 1; j++){
            string number = phone_book[i].substr(0, j + 1);
            if (set.count(number) == 1){     // number가 set에 있으면 1을 반환하고, 없으면 0을 반환
                answer = false;                     // answer을 false로
                break;
            }
        }
    }
    
    return answer;
}