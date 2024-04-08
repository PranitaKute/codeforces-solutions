#include <bits/stdc++.h>
using namespace std;

void solve(){
    //n no of problem,  k excitment count
    long long n,k;  cin>>n>>k;
    vector<int>arr(n);
    
    if(k == n - 1){
        for(int i = 1; i < n + 1; i++){
            cout<<i<<" ";
        }
    }
    else if(k == 0){
        for(int i = n; i > 0; i--){
            cout<<i<<" ";
        }
    }
    
    //n chi order ashi where (n[i] < n[i + 1]) == k
    else{
        for (int i = 0; i < n; ++i) {
            arr[i] = i + 1;
        }
        reverse(arr.begin(), arr.end() - k);
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main(){
    int t;  cin>>t;
    while(t--){
        solve();
    }
}
