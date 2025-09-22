#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    for (int i=0; i<3; i++) {
        int cnt = 0;
        for (int j=0; j<4; j++) {
            cin >> a;
            if (a == 1) {
                cnt++;
            }
        }
        switch(cnt) {
            case 3:
                cout << 'A' << '\n'; break;
            case 2:
                cout << 'B' << '\n'; break;
            case 1:
                cout << 'C' << '\n'; break;
            case 0:
                cout << 'D' << '\n'; break;
            case 4:
                cout << 'E' << '\n'; break;
        }
    }
}