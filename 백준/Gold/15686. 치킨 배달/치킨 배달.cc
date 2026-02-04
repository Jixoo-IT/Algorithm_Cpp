#include <bits/stdc++.h>
using namespace std;
int n, m, answer = 1e9;
int arr[54][54];
vector<vector<int>> checkList;
vector<pair<int, int>> home, chicken;

void combi(int x, vector<int> v){
    if (v.size() == m){
        checkList.push_back(v);
        return;
    }

    for (int i=x; i<chicken.size(); i++){
        v.push_back(i);
        combi(i+1, v);
        v.pop_back();
    }

    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
            if (arr[i][j] == 1) home.push_back({i, j});
            if (arr[i][j] == 2) chicken.push_back({i, j});
        }
    }

    vector<int> v;
    combi(0, v);

    for (int i=0; i<checkList.size(); i++){
        int cityDist = 0;
        for (int j=0; j<home.size(); j++){
            int minDist = 1e9;
            for (int k=0; k<m; k++){
                int c = checkList[i][k];
                int dist = abs(home[j].first - chicken[c].first) + abs(home[j].second - chicken[c].second);
                minDist = min(minDist, dist);
            }
            cityDist += minDist;
        }
        answer = min(answer, cityDist);
    }

    cout << answer;
    return 0;
}