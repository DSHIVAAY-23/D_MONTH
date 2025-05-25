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
    	int n,k,c=1;
		cin>>n>>k;
		vector<int>a(n);
		for(int& x:a)
			cin>>x;
		sort(a.begin(),a.end());
		vector<int>v;
		v.reserve(n);
		for(int i=1;i<n;i++)
			if(a[i-1]==a[i])
				c++;
			else {
				v.push_back(c);
				c=1;
			}
		v.push_back(c);
		sort(v.begin(),v.end());
		int i=0,sz=v.size(),t=k;
		sz--;
		for(;i<sz;i++){
			t-=v[i];
			if(t<0)
				break;
		}
		cout<<sz-i+1<<endl;

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