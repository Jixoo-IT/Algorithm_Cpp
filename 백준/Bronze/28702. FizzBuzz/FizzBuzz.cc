#include <iostream>
using namespace std;
string s;
int n, num;
string arr[5];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for (int i=0; i<3; i++){
        cin >> arr[i];
    }

    for (int i=2; i>=0; i--){
        if (arr[i] == "Fizz" || arr[i] == "Buzz" || arr[i] == "FizzBuzz") {
            continue;
        } else {
            n = i;
            break;
        }
    }

    num = stoi(arr[n]);

    if (n == 2) num += 1;
    else if (n == 1) num += 2;
    else if (n == 0) num += 3;

    if (num % 15 == 0) cout << "FizzBuzz";
    else if (num % 3 == 0 && num % 5 != 0) cout << "Fizz";
    else if (num % 3 != 0 && num % 5 == 0) cout << "Buzz";
    else cout << num;

    return 0;
}