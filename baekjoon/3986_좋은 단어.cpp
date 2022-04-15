/**
 * https://www.acmicpc.net/problem/3986
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int n; cin >> n;
    int ans = 0;
    while (n--) {
        string str; cin >> str;
        stack<char> st;
        for (auto c : str) {
            if (!st.empty() && st.top() == c) st.pop();
            else st.push(c);
        }
        if (st.empty()) ans++;
    }
    cout << ans;
}

int main(void) {
    solution();
    return (0);
}
