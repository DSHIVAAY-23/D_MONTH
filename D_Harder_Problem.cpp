#include <bits/stdc++.h>

#define DEBUG
#ifdef DEBUG
#define debug(x) cerr << #x << ": " << (x) << endl
#else
#define debug(x)
#endif
#define x first
#define y second
#define el '\n'
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
const int N = 3e5 + 10, INF = 0x3f3f3f3f, mod = 998244353;

void solve() {
    int n; cin >> n;
    set<int> S;
    for (int i = 1; i <= n; ++i) S.emplace(i);
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (S.count(a[i])) cout << a[i] << ' ', S.erase(a[i]);
    }
    for (int i: S) cout << i << ' ';
    cout << el;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tcase = 1;
    cin >> tcase;
    while (tcase--) solve();
}