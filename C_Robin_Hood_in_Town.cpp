#ifndef ONLINE_JUDGE
#include <iostream>
#else
#include<bits/stdc++.h>
#endif
using namespace std;
#define ll long long
#if defined(MYDEB)
int ____tt=1;
#include "../../../tools/local-test/debug.hpp"
#else
#define ___SHOW(...)
#define ___SHOWV(...)
#define ___SHOWA(...)
#define ___SHOWR(...)
#endif
#define FIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define FOR(i,n,m) for(int i=(n);i<=(m);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define YES printf("YES\n")
#define NO printf("NO\n")

namespace Fast_IO {
  #define SZ 1<<20
  static char inBuf[SZ], *iHeadP = inBuf, *iTailP = inBuf;
  #define getchar() iHeadP == iTailP && (iTailP = (iHeadP = inBuf) + fread(inBuf, 1, SZ, stdin), iHeadP == iTailP) ? EOF : *iHeadP++
  
  inline int ri() {
    int x(0), t(1);
    char fc(getchar());
    while (fc!=EOF && !('0'<=fc && fc<='9')) {
      if (fc == '-')
        t = -1;
      fc = getchar();
    }
    while ('0'<=fc && fc<='9')
      x = (x << 1) + (x << 3) + (fc & 15), fc = getchar();
    return x * t;
  }
}
using namespace Fast_IO;
#define pi(x) printf("%d", x)
#define pil(x) printf("%d\n", x)
#define pll(x) printf("%lld", x)
#define psp() putchar(' ')
#define pnl() putchar('\n')

bool multiCase = 1;


int n, nums[200'001];
void solve() {
  n=ri();
  ll sum=0;
  REP(i, n) {
    nums[i]=ri();
    sum+=nums[i];
  }
  if (n<=2) {
    pi(-1); pnl(); return;
  }
  sort(nums, nums+n);
  int mid=n/2;
  ll ans=nums[mid]*2ll*n-sum+1;
  pll(max(0ll, ans));
  pnl();
}

int main() {
#ifdef MYTEST
  freopen("./tools/local-test/in.txt", "r", stdin);
  freopen("./tools/local-test/out.txt", "w", stdout);
  clock_t start_time = clock();
#endif
  int tt = 1;
  if (multiCase) tt=ri();
  while (tt--) {
    
    solve();
  }
#ifdef MYTEST
  fprintf(stderr, "\n>> Exec Time: %.3f ms\n", (double)(clock() - start_time) / CLOCKS_PER_SEC * 1000);
#endif
  return 0;
}
