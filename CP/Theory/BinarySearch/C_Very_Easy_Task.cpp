#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>



using namespace std;
typedef long long ll;

bool prd( int n,int x,int y,int t){
    if(t<min(x,y)) return false;
    int cnt =1;
    t-=min(x,y);
    cnt += t/x + t/y;
    return cnt>=n;
}

int main() {
   ll   n,x,y;
    cin >> n>>x>>y;
    int l =0, r = max(x,y)*n, mid;
    while(l+1<r){
        mid = l+ (r-l)/2;
        if(prd(n,x,y,mid)){
            r = mid;
        }
        else{
            l = mid;
        }
    }  
    cout<<r<<endl;
}
