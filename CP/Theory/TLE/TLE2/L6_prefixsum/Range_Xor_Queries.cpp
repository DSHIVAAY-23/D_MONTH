#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<long long> 

void solve() {
    int n, q;
    cin >> n >> q;
    vec a(n + 1, 0); // Use 1-based indexing with prefix sums

    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        a[i] = a[i - 1]^x;
    }       

    // Process each query
    while (q--) {
        int l, r;
        cin >> l >> r;
        // Calculate the sum in range [l, r]
        cout << (a[r] ^ a[l - 1]) << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
