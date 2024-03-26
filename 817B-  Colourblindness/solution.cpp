#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n; cin>>n;
    string s1,s2; cin>>s1; cin>>s2;
    int i = 0;
        while(i < n){    
            if(s1[i] == s2[i] || (s1[i] == 'B'&& s2[i] == 'G') || ((s1[i] == 'G' && s2[i] == 'B'))){
                i++;
                continue;
            }
            else{
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
        return;
    }

int main(){
    int t; cin>>t;
    
    while(t--){
        ans();
    }
}
