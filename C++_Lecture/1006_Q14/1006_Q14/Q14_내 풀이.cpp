#include <string>
#include <iostream>
#include <vector>

using namespace std;
/*
int factorial(int num) {
    int resultf = -1;

    for (int i = 0; i <= num; ++i) {
        resultf = resultf * i;
    }
    return resultf;
}

int func(int a, int b) {
    int result = -1;

    int up = factorial(a);
    int down = factorial(a - b) * factorial(b);

    result = up / down;

    return result;
}


int main() {
    int answer = 0;
    int balls, share;

    cin >> balls >> share;

    answer = func(balls, share);

    cout << answer;
}
*/




int product(int from, int count) {
    int answer = 1;
    for (int i = 0; i < count; i++) {
        answer = answer * (from - i);   // overflow 발생, long을 사용
    }
    return answer;
}

int solution(int balls, int share) {
    int answer;
    if (balls < share) throw incorrectInput();
    try {
        int a = product(balls, share);
        int b = product(share, balls);
        answer = a / b;
    } catch (overflowError e) {
        cout << "Overflow Error" << endl;
        answer = -1;
    }
    catch (...) {
        cout << "Error:" << balls << " " << share << endl;
        answer = -1;
    }
    return answer;
}

int main(){
    int balls, share;
    cin >> balls >> share;

    try {
        cout << solution(balls, share);
    } catch {
        cout << "Incorrect Input:" << balls << " " << share << endl;
    }
}

