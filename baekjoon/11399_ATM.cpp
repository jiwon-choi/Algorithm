/**
 * https://www.acmicpc.net/problem/11399
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int n; cin >> n;

    vector<int> time;
    for (int i = 0; i < n; i++) {
        int element; cin >> element;
        time.push_back(element);
    }

    sort(time.begin(), time.end());
    reverse(time.begin(), time.end());

    int answer = 0;
    while (time.size() > 0) {
        answer += time.back() * time.size();
        time.pop_back();
    }
    cout << answer;
}

int main(void) {
    solution();
    return (0);
}
