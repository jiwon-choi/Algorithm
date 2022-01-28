/**
 * https://www.acmicpc.net/problem/18258
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int n; cin >> n;
    queue<int> queue;

    while (n--) {
        string cmd; cin >> cmd;
        if (cmd == "push") {
            int element; cin >> element;
            queue.push(element);
        } else if (cmd == "pop") {
            if (!queue.empty()) {
                cout << queue.front() << "\n";
                queue.pop();
            } else cout << -1 << "\n";
        } else if (cmd == "size") {
            cout << queue.size() << "\n";
        } else if (cmd == "empty") {
            cout << queue.empty() << "\n";
        } else if (cmd == "front") {
            if (!queue.empty())
                cout << queue.front() << "\n";
            else cout << -1 << "\n";
        } else if (cmd == "back") {
            if (!queue.empty())
                cout << queue.back() << "\n";
            else cout << -1 << "\n";
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solution();
    return (0);
}
