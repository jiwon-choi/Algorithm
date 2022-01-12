/**
 * https://www.acmicpc.net/problem/1406
 */

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    string init;
    cin >> init;
    list<char> L;

    for (auto c : init)
        L.push_back(c);

    auto cursor = L.end();
    int q;
    cin >> q;
    while (q--) {
        char op;
        cin >> op;
        if (op == 'P') {
            char add;
            cin >> add;
            L.insert(cursor, add);
        } else if (op == 'L') {
            if (cursor != L.begin())
                cursor--;
        } else if (op == 'D') {
            if (cursor != L.end())
                cursor++;
        } else if (op == 'B') {
            if (cursor != L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
        } else {}
    }
    for (auto c : L) cout << c;

    return (0);
}
