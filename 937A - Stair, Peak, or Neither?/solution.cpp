#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a < b && b < c){
        cout<<"STAIR\n";
    }
    else if(a < b && b > c){
        cout<<"PEAK\n";
    }
    else{
        cout<<"NONE\n";
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
