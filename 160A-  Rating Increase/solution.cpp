#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    string ab; cin>>ab;
    string a,b;
    bool check = false;
    
    for(int i = 1 ; i <= (int) ab.size() - 1; i++){
             a = ab.substr(0, i);
             b = ab.substr(i);
             
             if (a[0] == '0' || b[0] == '0') {
                    continue;
                }
            
            if (a.size() < b.size() || (a.size() == b.size() && a < b)){
               
                    cout<<a<<"\t"<<b<<endl;
                    check = true;
                    break;
                }
            }
            if (!check) {
                cout << -1 << '\n';
        }
    }

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
