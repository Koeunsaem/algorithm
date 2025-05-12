#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);

    string input;
    cin >> input;

    int count[26] = {0};

    for (char c : input) {
        count[c-'a']++;
    }

    for (int i=0; i<26; i++) {
        cout << count[i] << ' ';
    }

    return 0;
}