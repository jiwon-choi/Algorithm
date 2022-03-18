/**
 * https://www.acmicpc.net/problem/1021
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int n, m;
    cin >> n >> m;
    deque<int> deque;
    for (int i = 1; i <= n; i++)
        deque.push_back(i);
    int res = 0;
    while (m--) {
        int k; cin >> k;
        int idx = find(deque.begin(), deque.end(), k) - deque.begin();
        while (deque.front() != k) {
            if (idx <= deque.size() / 2) {
                deque.push_back(deque.front());
                deque.pop_front();
            } else {
                deque.push_front(deque.back());
                deque.pop_back();
            }
            res++;
        }
        deque.pop_front();
    }
    cout << res;
}

int main(void) {
    solution();
    return (0);
}
