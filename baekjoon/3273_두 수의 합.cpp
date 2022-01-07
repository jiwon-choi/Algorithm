/**
 * https://www.acmicpc.net/problem/3273
 */

#include "bits/stdc++.h"

int main(void) {
    int n, total;
    std::cin >> n;
    int input[n + 1];
    for (int i = 0; i < n; i++) {
        std::cin >> input[i];
    }
    input[n] = 0;
    std::cin >> total;

    std::sort(input, &input[n]);

    int cnt = 0;
    int i = -1;
    while (input[++i] <= total / 2) {
        int* tmp = std::find(&input[i + 1], &input[n], total - input[i]);
        if (tmp != &input[n])
            cnt++;
    }
    std::cout << cnt << std::endl;
    return (0);
}
