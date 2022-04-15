/**
 * https://www.acmicpc.net/problem/1926
 */

#include "bits/stdc++.h"

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void solution(void) {
    int n, m; cin >> n >> m;
    int board[n][m];
    bool visit[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            visit[i][j] = false;
        }
    }

    int count = 0;
    int maxSize = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0 || visit[i][j]) continue ;
            count++;
            queue<pair<int, int>> Q;
            visit[i][j] = true;
            Q.push({i, j});
            int size = 0;
            while (!Q.empty()) {
                size++;
                pair<int, int> current = Q.front();
                Q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = current.first + dx[dir];
                    int ny = current.second + dy[dir];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue ;
                    if (visit[nx][ny] || board[nx][ny] != 1) continue ;
                    visit[nx][ny] = true;
                    Q.push({nx, ny});
                }
            }
            maxSize = maxSize > size ? maxSize : size;
        }
    }
    cout << count << '\n' << maxSize << endl;
}

int main(void) {
    solution();
    return (0);
}
