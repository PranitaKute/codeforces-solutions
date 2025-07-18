// Please Accept ho ja
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    // cout<<"It works";
    int x;
    cin>>x;
    
    // lets try set, extract each digit of x
    set<int> digits;
    int temp = x;
    
    while(temp > 0){
        digits.insert(temp % 10);
        temp /= 10;
    }
    
    for(int y = 0; y <= 9; ++y){
        if(digits.count(y)) {
            cout << y << "\n";
            return;
        }
    }
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
