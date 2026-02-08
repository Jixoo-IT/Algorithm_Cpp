#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, ans, res = 1e9;
char arr[50][50];
string s;
char WB[8][8] = {
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W'
};
char BW[8][8] = {
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B'
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<=n-8; i++){
        for (int j=0; j<=m-8; j++){
            int cntB = 0;
            int cntW = 0;

            for (int x=0; x<8; x++){
                for (int y=0; y<8; y++){
                    if (arr[i+x][j+y] != BW[x][y]){
                        cntB++;
                    }
                    if (arr[i+x][j+y] != WB[x][y]){
                        cntW++;
                    }
                }
            }

            ans = min(cntB, cntW);
            res = min(res, ans);
        }
    }

    cout << res;
    return 0;
}