#include <iostream>
#include <vector>
using namespace std;
const int OFFSET = 10000000;
int n, m, num;
int arr[20000004];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    while (n--){
        cin >> num;
        arr[num + OFFSET]++;
    }

    cin >> m;

    while (m--){
        cin >> num;

        cout << arr[num + OFFSET] << " ";
    }
    return 0;
}