/**
 * https://www.acmicpc.net/problem/1158
 */

#include "bits/stdc++.h"

using namespace std;

void solution1(void) {
    int n, k;
    cin >> n >> k;

    list<int> L;
    for (int i = 1; i <= n; i++)
        L.push_back(i);

    cout << "<";
    while (!L.empty()) {
        for (int i = 0; i < k - 1; i++) {
            L.push_back(*L.begin());
            L.pop_front();
        }
        cout << *L.begin();
        L.pop_front();
        if (!L.empty())
            cout << ", ";
    }
    cout << ">";
}

void solution2(void) {
    int n, k;
    cin >> n >> k;

    queue<int> queue;
    for (int i = 1; i <= n; i++)
        queue.push(i);

    cout << "<";
    while (!queue.empty()) {
        for (int i = 0; i < k - 1; i++) {
            queue.push(queue.front());
            queue.pop();
        }
        cout << queue.front();
        queue.pop();
        if (!queue.empty())
            cout << ", ";
    }
    cout << ">";
}

int main(void) {
    // solution1();
    // solution2();
    return (0);
}