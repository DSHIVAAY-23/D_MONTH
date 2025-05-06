#include <bits/stdc++.h>
#include <cmath>  // Required for sqrt


//check 3 condition
// x is prime 
//n/x is prime
//x != n/x

using namespace std;
bool is_prime(int x){
    int LIM = sqrt(x);
    if (x==1) return false; //
    for (int i =2;i<=LIM;i++){
        if (x%i==0) return false;
    }
    return true;
}
bool is_almost_prime(int N){
    int LIM = sqrt(N);
    for (int i =2;i<=LIM;i++){
        if (N%i==0){
            if(is_prime(i) && is_prime(N/i) && i != N/i){
                return true;
            }
            else{
                return false;
            }
        }
    }
    return false;
    
}
int main() {
    int n;
    cin >> n; 
    int ans =0;
    for(int i =1;i<=n;i++){
       if (is_almost_prime(i)){
        ans += 1;
       }

    }
    cout<<ans<<endl;
   
}