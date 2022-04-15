/**
 * https://www.acmicpc.net/problem/4949
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    while (true) {
        string str;
        getline(cin, str);
        if (str == ".")
            break ;
        stack<char> st;
        bool isValid = true;

        for (auto c : str) {
            if (c == '(' || c == '[') st.push(c);
            else if (c == ')') {
                if (!st.empty() && st.top() == '(') st.pop();
                else {
                    isValid = false;
                    break ;
                }
            }
            else if (c == ']') {
                if (!st.empty() && st.top() == '[') st.pop();
                else {
                    isValid = false;
                    break ;
                }
            }
        }
        if (!st.empty()) isValid = false;
        if (isValid) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

int main(void) {
    solution();
    return (0);
}
