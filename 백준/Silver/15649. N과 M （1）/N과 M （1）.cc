#include <bits/stdc++.h>
using namespace std;

int N, M;

bool use[10];
int sel[10];

void permutation(int cnt) { // cnt : 선택한 갯수
    if (cnt == M) {
        for (int i=0; i<cnt; i++) {
            cout << sel[i] << ' ';
        }
        cout << '\n';

        return;
    }

    for (int i=1; i<=N; i++) {
        if(use[i]) continue;
        sel[cnt] = i;   
        use[i] = 1;

        permutation(cnt+1);

        sel[cnt] = 0;
        use[i] = 0;
    }
}


int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);

    cin >> N >> M;

    permutation(0);

    return 0;
}