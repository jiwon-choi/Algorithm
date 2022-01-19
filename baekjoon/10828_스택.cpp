/**
 * https://www.acmicpc.net/problem/10828
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int n; cin >> n;
    stack<int> st;
    queue<int> answer;

    for (int i = 0; i < n; ++i) {
        string cmd; cin >> cmd;
        if (cmd == "push") {
            int element; cin >> element;
            st.push(element);
        } else if (cmd == "pop") {
            if (!st.empty()) {
                answer.push(st.top());
                st.pop();
            } else answer.push(-1);
        } else if (cmd == "size") {
            answer.push(st.size());
        } else if (cmd == "empty") {
            answer.push(st.empty());
        } else if (cmd == "top") {
            if (!st.empty())
                answer.push(st.top());
            else answer.push(-1);
        }
    }

    while (!answer.empty()) {
        cout << answer.front() << endl;
        answer.pop();
    }
}

int main(void) {
    solution();
    return (0);
}
