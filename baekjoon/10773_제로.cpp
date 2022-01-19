/**
 * https://www.acmicpc.net/problem/10773
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int k; cin >> k;
    stack<int> st;
    for (int i = 0; i < k; i++) {
        int n; cin >> n;
        if (n == 0) st.pop();
        else st.push(n);
    }

    int sum = 0;
    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }
    cout << sum << endl;
}

int main(void) {
    solution();
    return (0);
}
