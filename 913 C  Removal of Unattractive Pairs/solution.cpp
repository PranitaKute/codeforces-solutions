// C. Removal of Unattractive Pairs

#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;    cin>>n;
    long long maxChar = 0;
    string s;   cin>>s;
    map<char,long long>occ;
    
    for(int i = 0; i < n; i++){
        occ[s[i]]++;
        maxChar = max(maxChar,occ[s[i]]); 
    }
    if(maxChar > n/2){
        cout<<( n - (n - maxChar) * 2)<<endl; 
    }
    else{
        cout<<(n % 2)<<endl;    
    }
    
}

int main(){
    int t;  cin>>t;
    while(t--){
        solve();
    }
}
