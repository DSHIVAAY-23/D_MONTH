#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<long long> 
#define pi pair<int,int>
#define D for(int i =0;i<n;i++)

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << "\n";
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(bool t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(multimap <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void solve() {
    int n,m;
    cin >> n ;
    vector<int> a(n);
    vector<int> prefix(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) prefix[i] = a[i];
        else prefix[i] = prefix[i - 1] + a[i];
    }
       cin >> m;
    vector<int> q(m);
    for (int i = 0; i < m; i++) {
        cin >> q[i];
    }

     for (int i = 0; i < m; i++) {
        int label = q[i];
        int pileIndex = lower_bound(prefix.begin(), prefix.end(), label) - prefix.begin();
        cout << (pileIndex + 1) << "\n"; 
    }
}
signed main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}