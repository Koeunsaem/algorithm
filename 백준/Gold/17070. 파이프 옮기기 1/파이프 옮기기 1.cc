#include <bits/stdc++.h>
using namespace std;

int N;
int board[20][20];

// 갈 수 있는 방향
// → : return (현재R, 현재C + 1)
// ↓ : return (현재R + 1, 현재C)
// ↘︎ : return (현재R + 1, 현재C + 1)

bool inBound(int x, int y) {
    return 0 < x && x <= N and 0 < y && y <= N;
}

bool canRight(int x, int y) {
    // 바깥으로 나갈 수 없음
    if (!inBound(x, y + 1)) return false;

    // 벽은 못 감
    if (board[x][y+1] == 1) return false;

    return true;
}

bool canDown(int x, int y) {
    if (!inBound(x + 1, y)) return false;
    if(board[x+1][y] == 1) return false;

    return true;
}

bool canDiagonal(int x, int y) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (!inBound(x+i, y+j)) return false;
            if (board[x+i][y+j] == 1) return false;
        }
    }

    return true;
}


int solve(int dir, int x, int y) {
    if (x == N and y == N) {
        return 1;
    }

    int ret = 0;
    // 오른쪽 방향일 때
    if (dir == 0) {
        if (canRight(x, y)) ret += solve(0, x, y+1);
        if (canDiagonal(x, y)) ret += solve(2, x+1, y+1);
    }

    // 아래 방향일 때
    if (dir == 1) {
        if (canDown(x, y)) ret += solve(1, x+1, y);
        if (canDiagonal(x, y)) ret += solve(2, x+1, y+1);
    }

    // 대각선 방향일 때
    if (dir == 2) {
        if (canRight(x, y)) ret += solve(0, x, y+1);
        if (canDown(x, y)) ret += solve(1, x+1, y);
        if (canDiagonal(x, y)) ret += solve(2, x+1, y+1);
    }

    return ret;
}

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);

    cin >> N;
    
    for(int r = 1; r <= N; r++) {
        for(int c = 1; c <= N; c++) {
            cin >> board[r][c];
        }
    }

    cout << solve(0, 1, 2);

    return 0;
}