#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;  cin>>n>>k;
    vector<int>arr(n);
       
    if (k == n) {
        for (int i = 0; i < n; ++i) {
            cout << "1 ";
        }
        cout<<endl;
    }
    
    else if (k == 1){
        for(int i = 1; i < n + 1; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"-1\n";
    }
return;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
