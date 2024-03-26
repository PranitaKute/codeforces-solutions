#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin>>t;
    
    string a = "Timur";
    sort(a.begin(), a.end());
    
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        sort(s.begin(), s.end());
        
        if( s == a){
            cout<<"Yes \n";
        }
        else{
            cout<<"No \n";
        }
    }
}
