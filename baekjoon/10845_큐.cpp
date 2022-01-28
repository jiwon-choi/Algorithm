/**
 * https://www.acmicpc.net/problem/10845
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
                cout << queue.front() << endl;
                queue.pop();
            } else cout << -1 << endl;
        } else if (cmd == "size") {
            cout << queue.size() << endl;
        } else if (cmd == "empty") {
            cout << queue.empty() << endl;
        } else if (cmd == "front") {
            if (!queue.empty())
                cout << queue.front() << endl;
            else cout << -1 << endl;
        } else if (cmd == "back") {
            if (!queue.empty())
                cout << queue.back() << endl;
            else cout << -1 << endl;
        }
    }
}

int main(void) {
    solution();
    return (0);
}
