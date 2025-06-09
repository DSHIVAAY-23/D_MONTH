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

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int &x : a) cin >> x;
	sort(a.begin(), a.end());
	int eq = 0, last = -10;
	vector<int> pos;
	for(int i = 1; i < n; i++){
		if(a[i] == a[i-1] && last != i-1) eq++, last = i, pos.push_back(i);
	}
	if(eq == 0){
		cout << "-1\n";
		return;
	}
	if(eq >= 2){
		cout << a[pos[0]] << " " << a[pos[0]] << " " << a[pos[1]] << " " << a[pos[1]] << "\n";
		return;
	}
	int cnt = 0;
	vector<int> b;
	for(int x : a){
		if(x != a[pos[0]] || cnt == 2) b.push_back(x);
		else cnt++;
	}
	for(int i = 1; i < n-2; i++){
		if(2*a[pos[0]]+b[i-1] > b[i]){
			cout << a[pos[0]] << " " << a[pos[0]] << " " << b[i-1] << " " << b[i] << "\n";
			return;
		}
	}
	cout << "-1\n";
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