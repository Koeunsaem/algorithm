#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    
    if (a == b) {
        if (a == c) { // 3개의 눈이 동일
            cout << 10000 + a * 1000;
        }
        else { // a랑 b 동일
        cout << 1000 + a * 100;
        }
    } else { // a랑 c or b랑 c 동일
        if (a == c or b == c) {
            cout << 1000 + c * 100;
        }
        else { // 셋 다 다름
            cout << max({a, b, c}) * 100;
        }
    }
}