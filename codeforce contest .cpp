#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long total = 0;
        long long m = n;

        while (m >= 3) {
            long long hao_eats = m / 3;
            total += hao_eats;
            m = (m + 2) / 3;
        }

        cout << total << '\n';
    }

    return 0;
}
