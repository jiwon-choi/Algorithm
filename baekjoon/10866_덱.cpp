/**
 * https://www.acmicpc.net/problem/10866
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int n; cin >> n;
    deque<int> deque;

    while (n--) {
        string cmd; cin >> cmd;
        if (cmd == "push_front") {
            int element; cin >> element;
            deque.push_front(element);
        } else if (cmd == "push_back") {
            int element; cin >> element;
            deque.push_back(element);
        } else if (cmd == "pop_front") {
            if (!deque.empty()) {
                cout << deque.front() << endl;
                deque.pop_front();
            } else {
                cout << "-1" << endl;
            }
        } else if (cmd == "pop_back") {
            if (!deque.empty()) {
                cout << deque.back() << endl;
                deque.pop_back();
            } else {
                cout << "-1" << endl;
            }
        } else if (cmd == "size") {
            cout << deque.size() << endl;
        } else if (cmd == "empty") {
            cout << deque.empty() << endl;
        } else if (cmd == "front") {
            if (!deque.empty()) {
                cout << deque.front() << endl;
            } else {
                cout << "-1" << endl;
            }
        } else if (cmd == "back") {
            if (!deque.empty()) {
                cout << deque.back() << endl;
            } else {
                cout << "-1" << endl;
            }
        }
    }
}

int main(void) {
    solution();
    return (0);
}
