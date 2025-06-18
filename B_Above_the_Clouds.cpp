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
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    const int MAX_LEN = 100; // Reasonable limit for a and b lengths
    
    for (int len_a = 1; len_a <= min(n - 2, MAX_LEN); len_a++) {
        for (int len_b = 1; len_b <= min(n - len_a - 1, MAX_LEN); len_b++) {
            int i = len_a; // End index of a
            int j = i + len_b; // End index of b
            if (j >= n) break; // Ensure c is non-empty
            string a = s.substr(0, i);
            string b = s.substr(i, len_b);
            string c = s.substr(j);
            string ac = a + c;
            if (ac.find(b) != string::npos) {
                cout << "Yes\n";
                return;
            }
        }
    }
    
    for (int i = 1; i < n - 1; i++) {
        string a = s.substr(0, i);
        string b = s.substr(i, 1); // Try b as single character
        string c = s.substr(i + 1);
        string ac = a + c;
        if (ac.find(b) != string::npos) {
            cout << "Yes\n";
            return;
        }
    }
    
    cout << "No\n";
}




signed main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}