/**
 * https://www.acmicpc.net/problem/2164
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int n; cin >> n;
    queue<int> queue;
    for (int i = 1; i <= n; i++)
        queue.push(i);
    while (queue.size() > 1) {
        queue.pop();
        queue.push(queue.front());
        queue.pop();
    }
    cout << queue.front() << endl;
}

int main(void) {
    solution();
    return (0);
}
