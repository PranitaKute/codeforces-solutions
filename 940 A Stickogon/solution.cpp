#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;    cin>>n;
    
    unordered_map <int, int> count;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        count[x]++;
    }
    
    long long sum = 0;
    for (auto&a : count) 
    sum += a.second / 3;
    cout<<sum<<endl;
}

int main(){
    int t;  cin>>t;
    while(t--){
        solve();
    }
}
