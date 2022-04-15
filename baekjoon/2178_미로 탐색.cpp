/**
 * https://www.acmicpc.net/problem/2178
 */

#include "bits/stdc++.h"

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void solution(void) {
    int n, m;
    cin >> n >> m;
    string str;
    int board[n][m];
    int distance[n][m];
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, str);
        int j = 0;
        for (auto c : str) {
            board[i][j] = c - '0';
            distance[i][j] = -1;
            j++;
        }
    }

    queue<pair<int, int>> Q;
    distance[0][0] = 0;
    Q.push({0, 0});
    while (!Q.empty()) {
        auto current = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = current.first + dx[dir];
            int ny = current.second + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (distance[nx][ny] >= 0 || board[nx][ny] != 1) continue;
            distance[nx][ny] = distance[current.first][current.second] + 1;
            Q.push({nx, ny});
        }
    }
    cout << distance[n - 1][m - 1] + 1;
}

int main(void) {
    solution();
    return (0);
}
