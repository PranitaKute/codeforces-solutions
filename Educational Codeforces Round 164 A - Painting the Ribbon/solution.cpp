#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    while(t--){
        long long n,m,k;
        cin>>n>>m>>k;
        if (k < n - (n + m - 1) / m){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        } 
    }
}
