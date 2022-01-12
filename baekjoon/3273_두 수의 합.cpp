/**
 * https://www.acmicpc.net/problem/3273
 */

#include "bits/stdc++.h"

void solution1(void) {
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
}


void solution2(void) {
    using namespace std;

    int n, total;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++)
        cin >> input[i];
    cin >> total;

    sort(input.begin(), input.end());

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (binary_search(input.begin() + i + 1, input.end(), total - input[i]))
            cnt++;
    }
    cout << cnt;
}

int main(void) {
    // solution1();
    // solution2();
    return (0);
}
