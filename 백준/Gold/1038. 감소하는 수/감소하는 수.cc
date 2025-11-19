#include <bits/stdc++.h>
#include <queue>
using namespace std;

long long DP[10000010];

void solve(int n) {
    queue<long long> Q;
    for (int i=1; i<=9; i++) {
        Q.push(i);
        DP[i] = i;
    }

    if (0 <= n && n <= 10) {
        cout << n;
        return;
    }

    int idx = 10;
    while (idx <= n && Q.empty() == false) {
        long long number = Q.front();
        Q.pop();

        int last = number % 10;
        for(int i=0; i<last; i++) {
            Q.push(number * 10 + i);
            DP[idx++] = number * 10 + i;
        }
    }

    if (idx >= n && DP[n] != 0) {
        cout << DP[n];
    }
    else {
        cout << -1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    solve(n);

    return 0;
}