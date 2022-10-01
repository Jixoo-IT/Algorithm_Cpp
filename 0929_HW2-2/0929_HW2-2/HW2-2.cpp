// 삼각형의 완성조건 (1)

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;

    int a = sides[0], b = sides[1], c = sides[2];
    int max, edge1, edge2;

    if (a > b && a > c) {   // a가 최댓값
        max = a;
        edge1 = b;
        edge2 = c;
    }
    else if (b > a && b > c) { // b가 최댓값
        max = b;
        edge1 = a;
        edge2 = c;
    }
    else if (c > a && c > b) { // c가 최댓값
        max = c;
        edge1 = a;
        edge2 = b;
    }

    if (max < edge1 + edge2) {
        answer = 1;
    }
    else {
        answer = 2;
    }

    return answer;
}


/* 답안 */
int getLongest(vector<int> sides) {
    int longest = -1;
    for (int i = 0; i < sides.size(); i++) {
        if (sides[i] > longest) longest = sides[i];
    }
    return longest;
}

int getOthersum(vector<int> sides, int longest) {
    int othersum = 0;
    for (int i = 0; i < sides.size(); i++) {
        othersum += sides[i];
    }
    return othersum - longest;
}

int solution(vector<int> sides) {
    int answer = 2;
    int longest=getLongest(sides);
    int othersum = getOthersum(sides, longest);

    if (longest < othersum) answer = 1;
    
    return answer;
}