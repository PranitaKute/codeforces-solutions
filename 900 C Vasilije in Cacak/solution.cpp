#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x;    cin>>n>>k>>x;
    long long min = k * (k + 1);
    long long max = n * (n + 1) - (n - k) * (n - k + 1);
    if(2 * x >= min && 2 * x <= max){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main(){
    int t;  cin>>t;
    while(t--){
        solve();
    }
}
