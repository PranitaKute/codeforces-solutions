#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,x;    cin>>n>>x;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    
    int maxDist = max(a[0], x - a[n - 1]);
    // int maxDist = max(x - a[n - 1], a[0] - 0);
    
    // if(n == 1){
    //     if((a[0] - 0 ) > maxDist){
    //         maxDist = a[0] - 0;
    //     }
    // }
    
    for(int i = 1; i < n; i++){
        if((a[i] - a[i - 1]) > maxDist){
            maxDist = a[i] - a[i - 1];
        }
    }
    
    maxDist = max(maxDist, 2 * (x - a[n - 1]));
    
    cout<<maxDist<<endl;
}
 
int main() {
	int t;  cin>>t;
	while(t--){
	    solve();
	}
    return 0;
}
