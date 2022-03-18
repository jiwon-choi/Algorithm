/**
 * https://www.acmicpc.net/problem/11047
 */

#include "bits/stdc++.h"

using namespace std;

void solution(void) {
    int n, k;
    cin >> n >> k;

    int coin[n];
    for (int i = 0; i < n; i++)
        cin >> coin[i];

    int answer = 0;
    while (k > 0) {
        answer += k / coin[--n];
        k %= coin[n];
    }
    cout << answer;
}

int main(void) {
    solution();
    return (0);
}
