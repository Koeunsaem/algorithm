#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int input;
    cin >> input;
    
    if (input % 4 == 0){
        if (input % 100 != 0) {
            cout << 1;
        }
        else if (input % 400 == 0){
            cout << 1;
        }
        else {
            cout << 0;
        }
    } else {
        cout << 0;
    }
}