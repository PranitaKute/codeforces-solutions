#include <bits/stdc++.h>
using namespace std;

void ans() {
    int n; cin >> n;
    vector<int> arr(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    int m = arr[(n + 1) / 2];        
    int count = 0;
    
    for(int i = (n + 1) / 2; i <= n; i++){
        if(arr[i] == m){
        count++;
        }
    }
    cout<<count<<endl;   
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        ans();
    }
    return 0;
}
