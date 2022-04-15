/**
 * https://www.acmicpc.net/problem/4179
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int r, c; cin >> r >> c;

    int fire[r][c];
    int jihoon[r][c];
    string board[r];
    queue<pair<int, int>> fireQueue;
    queue<pair<int, int>> jihoonQueue;

    for (int i = 0; i < r; i++) {
        fill(fire[i], fire[i] + c, -1);
        fill(jihoon[i], jihoon[i] + c, -1);
        cin >> board[i];
        for (int j = 0; j < c; j++) {
            if (board[i][j] == 'F') {
                fireQueue.push({i, j});
                fire[i][j] = 0;
            } else if (board[i][j] == 'J') {
                jihoonQueue.push({i, j});
                jihoon[i][j] = 0;
            }
        }
    }

    while (!fireQueue.empty()) {
        auto current = fireQueue.front();
        fireQueue.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = current.first + dx[dir];
            int ny = current.second + dy[dir];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
            if (fire[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            fire[nx][ny] = fire[current.first][current.second] + 1;
            fireQueue.push({nx, ny});
        }
    }

    while (!jihoonQueue.empty()) {
        auto current = jihoonQueue.front();
        jihoonQueue.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = current.first + dx[dir];
            int ny = current.second + dy[dir];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
                cout << jihoon[current.first][current.second] + 1;
                return ;
            }
            if (jihoon[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            if (fire[nx][ny] != -1 && fire[nx][ny] <= jihoon[current.first][current.second] + 1) continue;
            jihoon[nx][ny] = jihoon[current.first][current.second] + 1;
            jihoonQueue.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE";
}

int main(void) {
    solution();
    return (0);
}
