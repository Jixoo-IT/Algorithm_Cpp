#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(vector<int> arr)
{
    bool answer = true;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != i + 1) {
            return false;
        }
    }

    return answer;



/*
*   vector<int> count;
    for (int i = 0; i < arr.size(); i++)
        count.push_back(0);
    for(int i=0; i < arr.size(); i++){
        if(arr[i] != i+1){
            return false;
        }
    }
*/ 
}