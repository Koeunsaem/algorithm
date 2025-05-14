#include <bits/stdc++.h>
using namespace std;

int num[10];

int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);

    int a, b, c, mul;
    cin >> a >> b >> c;

    mul = a * b * c;
    
    while (mul > 0) {
        int n = mul % 10;
        num[n]++;
        mul /= 10;
    }
    
    for(int i=0; i<10; i++) {
        cout << num[i] << '\n';
    }
    
    return 0;
}