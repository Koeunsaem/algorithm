#include <bits/stdc++.h>
using namespace std;

#define R first
#define C second

using Point = pair<int, int>;

vector <Point> chickens;
vector <Point> homes;

int N, M;
int board[52][52];

int getDistance(Point& p1, Point& p2) {
    return abs(p1.R - p2.R) + abs(p1.C - p2.C);
}

int ans = 987654321;

void comb(int cnt, int idx, vector<Point> sel) {
    if (cnt == M) {
        int tempCityD = 0;
        for (int j = 0; j < homes.size(); j++) {
            Point& home = homes[j];

            int tempChikenD = 987654321;
            for (int k = 0; k < sel.size(); k++) {
                Point& chicken = sel[k];

                int tempD = getDistance(home, chicken);
                tempChikenD = min(tempChikenD, tempD);
            }

            tempCityD += tempChikenD;
        }
        ans = min(ans, tempCityD);
        return;
    }

    for (int i = idx; i < chickens.size(); i++) {
        Point& selectedChicken = chickens[i];
        sel.push_back(selectedChicken);
        comb(cnt+1, i+1, sel);
        sel.pop_back();
    }
}

int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);

    cin >> N >> M;

    for (int r = 1; r <= N; r++) {
        for (int c = 1; c <= N; c++) {
            cin >> board[r][c];

            if (board[r][c] == 1) {
                homes.push_back({r, c});
            } else if (board[r][c] == 2) {
                chickens.push_back({r, c});
            }
        }
    }

    comb(0, 0, vector<Point>());

    cout << ans;


    return 0;
}