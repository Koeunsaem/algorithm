#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    
    int big = max({a, b, c});
    int small = min({a, b, c});
    int mid = a + b + c - big - small;

    cout << small << " " << mid << " " << big;
}