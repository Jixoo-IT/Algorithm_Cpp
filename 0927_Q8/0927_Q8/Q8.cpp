// Q8. 369 ∞‘¿”

#include <string>
#include <vector>

using namespace std;

int countDigit(int num, int digit) {
    int count = 0;
    for (int n = num; n > 0; n /= 10)
        if (n % 10 == digit)
            count++;
    return count;
}

int solution(int order) {
    int answer = 0;

    answer += countDigit(order, 3);
    answer += countDigit(order, 6);
    answer += countDigit(order, 9);

    return answer;
}


/*
#include <string>
#include <vector>

using namespace std;

int threesixnine(int j) {
    if (j == 3, 6, 9) {   // lower case
        return answer.push_back[j];
    }
    else {    // upper case
        return c + 32;
    }
}

int solution(int order) {
    int answer = 0;

    for (int i = 0; i < order.size(); i++) {
        answer += threesixnine(order[i]);
    }

    return answer;
}

*/