#include <bits/stdc++.h>
using namespace std;

long long deal_cost(int x) {
    if (x == 0) return 3; // 1 watermelon
    long long p = 1;
    for (int i = 0; i < x; i++) p *= 3;
    return p + 1 + x * (p / 3);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<int> digits;
        long long tmp = n;
        while (tmp > 0) {
            digits.push_back(tmp % 3);
            tmp /= 3;
        }

        long long needed = 0;
        for (int d : digits) needed += (d > 0);

        if (needed > k) {
            cout << -1 << "\n";
            continue;
        }

        long long cost = 0;
        for (int i = 0; i < (int)digits.size(); i++) {
            if (digits[i]) {
                cost += 1LL * digits[i] * deal_cost(i);
            }
        }
        cout << cost << "\n";
    }
    return 0;
}

