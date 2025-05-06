#include <bits/stdc++.h>
#include <cmath>  

using namespace std;

int main(){
   
    vector<int> a={3,2,4,5,6,9,86};
    sort(a.begin(),a.end());
    for(auto i: a){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(a.rbegin(),a.rend());
     for(auto i :a){
        cout<< i <<" ";
    }
        cout<<endl;

    a.insert(a.begin(),10);
     for(auto i :a){
        cout<< i <<" ";
    }
        cout<<endl;

}