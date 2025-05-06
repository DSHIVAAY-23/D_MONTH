#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>



using namespace std;
typedef long long ll;

bool prd(vector<int> &a,int k, double x){
    if(x==0){
        return true;
    }    
    int cnt =0;
    for(int i=0;i<a.size();i++){
        cnt += a[i]/x;   
    }
    if(cnt>=k){
        return true;
    }
    else{
        return false;
    }
}

int main() {
   ll   n,k;
    cin >> n>>k;
    vector <int> a(n);
    for(auto &i:a) {
        cin >> i;
    }
    double l =0,r=1e8,mid;
    cout<<setprecision(7);
    int lp =100;
    while(lp--){
        mid = l + (r-l)/2;
        if(prd(a,k,mid)){
            l = mid;
        }
        else{
            r = mid;
        }
    }
cout<<l<<endl;
    
   
}
