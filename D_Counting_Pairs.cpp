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
    long long x, y;
    cin >> n >> x >> y;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Compute total sum
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    
    // Sort the array for two-pointer technique
    sort(a.begin(), a.end());
    
    long long count = 0;
    int left = 0, right = n - 1;
    
    // For each left index, find valid right indices
    for (int i = 0; i < n - 1; i++) {
        // Binary search for the range of valid a[j] such that a[i] + a[j] in [sum - y, sum - x]
        long long min_sum = sum - y - a[i]; // a[j] >= min_sum
        long long max_sum = sum - x - a[i]; // a[j] <= max_sum
        
        // Find the first index j where a[j] >= min_sum and j > i
        int lo = i + 1, hi = n - 1, first_valid = n;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (a[mid] >= min_sum) {
                first_valid = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        
        // Find the last index j where a[j] <= max_sum and j > i
        lo = i + 1, hi = n - 1;
        int last_valid = i;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (a[mid] <= max_sum) {
                last_valid = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        
        // Count valid pairs (i, j) where first_valid <= j <= last_valid
        if (first_valid <= last_valid) {
            count += (long long)(last_valid - first_valid + 1);
        }
    }
    
    cout << count << endl;
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