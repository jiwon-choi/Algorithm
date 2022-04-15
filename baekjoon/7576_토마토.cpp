/**
 * https://www.acmicpc.net/problem/7576
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int m, n;
    cin >> m >> n;

    int box[n][m];
    int distance[n][m];
    queue<pair<int, int>> Q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> box[i][j];
            distance[i][j] = 0;
            if (box[i][j] == 1)
                Q.push({i, j});
            if (box[i][j] == 0)
                distance[i][j] = -1;
        }
    }

    while (!Q.empty()) {
        auto current = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = current.first + dx[dir];
            int ny = current.second + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (distance[nx][ny] >= 0) continue;
            distance[nx][ny] = distance[current.first][current.second] + 1;
            Q.push({nx, ny});
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (distance[i][j] == -1) {
                cout << -1;
                return ;
            }
            ans = ans > distance[i][j] ? ans : distance[i][j];
        }
    }
    cout << ans;
}

int main(void) {
    solution();
    return (0);
}
