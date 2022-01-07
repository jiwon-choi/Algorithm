/**
 * https://www.acmicpc.net/problem/1475
 */

#include "bits/stdc++.h"

int main(void) {
    int input;
    std::vector<int> cnt(10, 0);
    std::cin >> input;
    while (input > 0) {
        cnt[input % 10]++;
        input /= 10;
    }
    cnt[6] = (cnt[6] + cnt[9] + 1) / 2;
    cnt[9] = 0;

    std::cout << *std::max_element(cnt.begin(), cnt.end()) << std::endl;
    return (0);
}
