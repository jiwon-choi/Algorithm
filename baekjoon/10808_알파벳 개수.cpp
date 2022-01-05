/**
 * https://www.acmicpc.net/problem/10808
 */

#include "bits/stdc++.h"

int main(void) {
    std::string input;
    int cnt[26] = {};

    std::cin >> input;
    for (int i = 0; i < input.length(); i++)
        cnt[input[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        std::cout << cnt[i] << ' ';

    return (0);
}
