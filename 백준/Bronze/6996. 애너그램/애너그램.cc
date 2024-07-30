#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool Anagram(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b) {
        return true;        // 애너그램 O
    }
    else {
        return false;       // 애너그램 X
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    string s1, s2;

    cin >> n;

    while (n--) {
        cin >> s1 >> s2;
        
        if (Anagram(s1, s2) == true) {
            cout << s1 << " & " << s2 << " are anagrams." << "\n";
        }
        else {
            cout << s1 << " & " << s2 << " are NOT anagrams." << "\n";
        }
    }
    
    return 0;
}