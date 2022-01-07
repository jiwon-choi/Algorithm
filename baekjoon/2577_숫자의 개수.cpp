/**
 * https://www.acmicpc.net/problem/2577
 */

#include "bits/stdc++.h"

int main(void) {
    int a, b, c;
    std::cin >> a >> b >> c;
    int result = a * b * c;

    int cnt[10] = {};
    while (result > 0) {
        cnt[result % 10]++;
        result /= 10;
    }
    for (int i = 0; i < 10; i++)
        std::cout << cnt[i] << std::endl;
    return (0);
}
