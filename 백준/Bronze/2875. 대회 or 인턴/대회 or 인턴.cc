#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);

    int N, M, K, ans = 0;
    cin >> N >> M >> K;

    for (int girl = 0; girl <= K; girl++) {
        int boy = K-girl;

        if (N - girl < 0 || M - boy < 0) continue;

        int girlTeam = (N - girl) / 2;
        int boyTeam = M - boy;

        ans = max(ans, min(girlTeam, boyTeam));
    }

    cout << ans;

    return 0;
}