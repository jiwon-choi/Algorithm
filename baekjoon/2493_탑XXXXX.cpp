/**
 * https://www.acmicpc.net/problem/2493
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int n; cin >> n;
    vector<int> tower;

    while (n--) {
        int h; cin >> h;
        tower.push_back(h);

        if (tower.size() == 1) {
            cout << '0';
            continue ;
        }

        int answer = 0;
        for (int i = tower.size() - 2; i >= 0; i--) {
            if (h < tower[i]) {
                answer = i + 1;
                break ;
            }
        }
        cout << ' ' << answer;
    }
}

int main(void) {
    solution();
    return (0);
}
