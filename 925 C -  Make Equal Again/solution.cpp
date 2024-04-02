#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin>>n;
    const int N = 200200;
    long double arr[N];
    for(int i = 1; i <= n; i++){
    cin >> arr[i];
    }
    // check if first and last elements are same
    if(arr[1] == arr[n]){
        //cout<<"Same";
        int l , r ;
        l = 1;
        r = n;
        while(arr[l] == arr[1] && l <= r)
            l++;
        while(arr[r] == arr[n] && r >= l)
            r--;
         cout<<r-l+1<<endl;
            }
    else {
        //cout<<"Not same";
        int l, r;
        l = 1; r = n;
        while(arr[l] == arr[1] && l<=r)
            l++;  
        while(arr[r] == arr[n] && r>=l)
            r--;
        cout<<min(r, n-l+1)<<endl;
        }
}

int main() {
    int t = 1;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
