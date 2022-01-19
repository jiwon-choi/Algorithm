/**
 * https://www.acmicpc.net/problem/1874
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int n; cin >> n;

    int tmp = 1;
    stack<int> st;
    string ans = "";

    while (n--) {
        int element; cin >> element;
        while (tmp <= element) {
            st.push(tmp++);
            ans += "+\n";
        }
        if (st.top() != element) {
            cout << "NO" << endl;
            return ;
        } else {
            st.pop();
            ans += "-\n";
        }
    }
    cout << ans;
}

int main(void) {
    solution();
    return (0);
}
