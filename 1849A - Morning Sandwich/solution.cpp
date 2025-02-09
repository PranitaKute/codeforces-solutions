#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    
    long long b, c, h;    
    cin >> b >> c >> h;
    
    int layer = min(b - 1,c + h) * 2 + 1;
    cout<< layer <<"\n";
    
}
 
int main(){
    int t;  cin>>t;
    while(t--){
        solve();
    }
}
