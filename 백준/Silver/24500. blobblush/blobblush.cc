#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);

    ll N; cin >> N;

    ll X = 1;
    while (N >= X) 
        X <<= 1;
    X--;

    if (N == X) {
        cout << 1 << '\n' << X;
    } else {
        cout << 2 << '\n' << (N^X) << '\n' << N;
    }

    return 0;
}