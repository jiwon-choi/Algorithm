/**
 * https://www.acmicpc.net/problem/5397
 */

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    int n;
    cin >> n;

    while (n--) {
        string input;
        cin >> input;
        list<char> L;
        auto cursor = L.begin();

        for (auto c : input) {
            if (c == '<') {
                if (cursor != L.begin())
                    cursor--;
            } else if (c == '>') {
                if (cursor != L.end())
                    cursor++;
            } else if (c == '-') {
                if (cursor != L.begin()) {
                    cursor--;
                    cursor = L.erase(cursor);
                }
            } else {
                L.insert(cursor, c);
            }
        }
        for (auto c : L) cout << c;
        cout << endl;
    }
    return (0);
}
